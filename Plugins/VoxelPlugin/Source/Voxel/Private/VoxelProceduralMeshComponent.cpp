#include "VoxelProceduralMeshComponent.h"

class AVoxelWorld;

void UVoxelProceduralMeshComponent::SetVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld, bool bFrozen) {

}

bool UVoxelProceduralMeshComponent::AreVoxelCollisionsFrozen(const AVoxelWorld* VoxelWorld) {
    return false;
}

UVoxelProceduralMeshComponent::UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
    this->BodySetup = NULL;
    this->BodySetupBeingCooked = NULL;
    this->StaticMeshComponent = NULL;
}

void UVoxelProceduralMeshComponent::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	/*UVoxelProceduralMeshComponent* This = CastChecked<UVoxelProceduralMeshComponent>(InThis);
	Collector.AddReferencedObject( This->StaticMeshComponent, This );
	AddReferencedObjects( This, Collector );*/
}

void UVoxelProceduralMeshComponent::Serialize(FArchive& Ar)
{
	/*Serialize(Ar);
	
	Ar << StaticMeshComponent;*/
}

void UVoxelProceduralMeshComponent::PostLoad()
{
	/*PostLoad();

	// Fix for old StaticMeshComponent components which weren't created with transactional flag.
	SetFlags( RF_Transactional );

	// BuildRenderData relies on the StaticMeshComponent having been post-loaded, so we ensure this by calling ConditionalPostLoad.
	check(StaticMeshComponent);
	StaticMeshComponent->ConditionalPostLoad();*/
	
}

bool UVoxelProceduralMeshComponent::IsNameStableForNetworking() const
{
	// UVoxelProceduralMeshComponent is always persistent for the duration of a game session, and so can be considered to have a stable name
	return true;
}

void UVoxelProceduralMeshComponent::GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials) const
{
	
}

int32 UVoxelProceduralMeshComponent::GetNumMaterials() const
{
	return 0;
}

UMaterialInterface* UVoxelProceduralMeshComponent::GetMaterial(int32 MaterialIndex) const
{
	UMaterialInterface* Material = nullptr;
	
	return Material;
}

UMaterialInterface* UVoxelProceduralMeshComponent::GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const
{
	UMaterialInterface* Result = nullptr;
	SectionIndex = 0;
	return Result;
}

bool UVoxelProceduralMeshComponent::IsPrecomputedLightingValid() const
{
	return false;
}

void UVoxelProceduralMeshComponent::GetStreamingRenderAssetInfo(FStreamingTextureLevelContext& LevelContext, TArray<FStreamingRenderAssetPrimitiveInfo>& OutStreamingRenderAssets) const
{
	
}

void UVoxelProceduralMeshComponent::CreateRenderState_Concurrent(FRegisterComponentContext* Context)
{

}

void UVoxelProceduralMeshComponent::DestroyRenderState_Concurrent()
{
	
}

FPrimitiveSceneProxy* UVoxelProceduralMeshComponent::CreateSceneProxy()
{
	return NULL;
}

bool UVoxelProceduralMeshComponent::ShouldRecreateProxyOnUpdateTransform() const
{
	return true;
}

FBoxSphereBounds UVoxelProceduralMeshComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	return FBoxSphereBounds(LocalToWorld.GetLocation(), FVector::ZeroVector, 0.f);
}

void UVoxelProceduralMeshComponent::InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly)
{
	
}

void UVoxelProceduralMeshComponent::PropagateLightingScenarioChange()
{
	
}

bool UVoxelProceduralMeshComponent::GetLightMapResolution( int32& Width, int32& Height ) const
{
	return false;
}

int32 UVoxelProceduralMeshComponent::GetStaticLightMapResolution() const
{
	/*int32 Width;
	int32 Height;
	GetLightMapResolution(Width, Height);

	return FMath::Max<int32>(Width, Height);*/
	return NULL;
}

void UVoxelProceduralMeshComponent::GetLightAndShadowMapMemoryUsage( int32& LightMapMemoryUsage, int32& ShadowMapMemoryUsage ) const
{
	/*return;*/
}

#if WITH_EDITOR
void UVoxelProceduralMeshComponent::GetStaticLightingInfo(FStaticLightingPrimitiveInfo& OutPrimitiveInfo,const TArray<ULightComponent*>& InRelevantLights,const FLightingBuildOptions& Options)
{
	/*check(0);*/
}

void UVoxelProceduralMeshComponent::AddMapBuildDataGUIDs(TSet<FGuid>& InGUIDs) const
{
	
}

void UVoxelProceduralMeshComponent::PostEditUndo()
{
	/*PostEditUndo();*/
}
#endif // WITH_EDITOR

bool UVoxelProceduralMeshComponent::GetPhysicsTriMeshData(struct FTriMeshCollisionData* CollisionData, bool InUseAllTriData)
{
	return false;
}

bool UVoxelProceduralMeshComponent::ContainsPhysicsTriMeshData(bool InUseAllTriData) const
{
	return false;
}

bool UVoxelProceduralMeshComponent::GenerateElements(bool bBuildRenderData)
{
	return false;
}