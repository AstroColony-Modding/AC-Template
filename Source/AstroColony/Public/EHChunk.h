#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EChunkGenerationType.h"
#include "EHCelestialBodyGeneration.h"
#include "EHNebulaGeneration.h"
#include "Templates/SubclassOf.h"
#include "EHChunk.generated.h"

class AEHColliderWorld;
class AEHPlanetoidGrid;
class AEHVoxelWorld;
class AVoxelWorld;
class USceneComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHChunk : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ProcedurallyGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChunkGenerationType ChunkGenerationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlanetoidStreamingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEHVoxelWorld> VoxelWorldTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEHVoxelWorld> VoxelWorldTemplateSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEHColliderWorld> ColliderWorldTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEHPlanetoidGrid> PlanetoidTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoiseMultiplyX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoiseMultiplyY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoiseMultiplyZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EChunkGenerationType, float> SpawnRatioForGenerationTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerateChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> SeedsVoxelWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZOffsetVoxelWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZOffsetPlanetoidGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIntVector ChunkCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ChunkMiddlePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CollisionsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColliderDeactivateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoadedFromSavegame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CelestialBodiesGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NebulaEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NebulaDensity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlanetoidGrid, meta=(AllowPrivateAccess=true))
    AEHPlanetoidGrid* PlanetoidGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SmallPlanetoidGrids, meta=(AllowPrivateAccess=true))
    TArray<AEHPlanetoidGrid*> SmallPlanetoidGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CelestialBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHCelestialBodyGeneration> CelestialGenerations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEHNebulaGeneration> NebulaGenerations;
    
public:
    AEHChunk();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateCollision(bool InCollisionsEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void SpawnVoxelWorld(AEHPlanetoidGrid* EHPlanetoidGrid, const bool IsPlanet, const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCelestialBodies();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SmallPlanetoidGrids();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlanetoidGrid();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChunkGenerated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChunkCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadStreamingPlanetoid();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleWorldLoaded(AVoxelWorld* VoxelWorld);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUniverseChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSettingsApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEHCelestialBodyGeneration> GetCelestialGenerations(const EChunkGenerationType GenerationTyp);
    
};

