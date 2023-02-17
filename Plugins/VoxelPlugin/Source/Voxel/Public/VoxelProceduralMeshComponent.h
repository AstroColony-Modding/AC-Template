#pragma once
#include "CoreMinimal.h"
#include "Components/ModelComponent.h"
#include "VoxelIntBox.h"
#include "VoxelProceduralMeshComponent.generated.h"

class UBodySetup;
class UStaticMeshComponent;
class AVoxelWorld;
class UModelComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelProceduralMeshComponent : public UModelComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetupBeingCooked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void SetVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld, bool bFrozen);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitChunk(uint8 ChunkLOD, FVoxelIntBox ChunkBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld);

//~ Begin UPrimitiveComponent Interface.
	virtual void CreateRenderState_Concurrent(FRegisterComponentContext* Context) override;
	virtual void DestroyRenderState_Concurrent() override;
	virtual bool GetLightMapResolution( int32& Width, int32& Height ) const override;
	virtual int32 GetStaticLightMapResolution() const override;
	virtual void GetLightAndShadowMapMemoryUsage( int32& LightMapMemoryUsage, int32& ShadowMapMemoryUsage ) const override;
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	virtual bool ShouldRecreateProxyOnUpdateTransform() const override;
#if WITH_EDITOR
	virtual void GetStaticLightingInfo(FStaticLightingPrimitiveInfo& OutPrimitiveInfo,const TArray<ULightComponent*>& InRelevantLights,const FLightingBuildOptions& Options) override;
	virtual void AddMapBuildDataGUIDs(TSet<FGuid>& InGUIDs) const override;
#endif
	virtual ELightMapInteractionType GetStaticLightingType() const override	{ return LMIT_Texture;	}
	virtual void GetStreamingRenderAssetInfo(FStreamingTextureLevelContext& LevelContext, TArray<FStreamingRenderAssetPrimitiveInfo>& OutStreamingRenderAssets) const override;
	virtual void GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials = false) const override;
	virtual class UBodySetup* GetBodySetup() override { return ModelBodySetup; };
	virtual int32 GetNumMaterials() const override;
	virtual UMaterialInterface* GetMaterial(int32 MaterialIndex) const override;
	virtual UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const override;
	virtual bool IsPrecomputedLightingValid() const override;
	//~ End UPrimitiveComponent Interface.

	//~ Begin UActorComponent Interface.
	virtual void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) override;
	virtual void PropagateLightingScenarioChange() override;
	//~ End UActorComponent Interface.

	//~ Begin UObject Interface.
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
	virtual bool IsNameStableForNetworking() const override;
#if WITH_EDITOR
	virtual void PostEditUndo() override;
#endif // WITH_EDITOR
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
	//~ End UObject Interface.

	//~ Begin Interface_CollisionDataProvider Interface
	virtual bool GetPhysicsTriMeshData(struct FTriMeshCollisionData* CollisionData, bool InUseAllTriData) override;
	virtual bool ContainsPhysicsTriMeshData(bool InUseAllTriData) const override;
	virtual bool WantsNegXTriMesh() override { return false; }
	//~ End Interface_CollisionDataProvider Interface

//#if WITH_EDITOR
	/**
	 *	Generate the Elements array.
	 *
	 *	@param	bBuildRenderData	If true, build render data after generating the elements.
	 *
	 *	@return	bool				true if successful, false if not.
	 */
	virtual bool GenerateElements(bool bBuildRenderData);
//#endif // WITH_EDITOR  
};