#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelNoiseInterpolation.h"
#include "VoxelIntBox.h"
#include "EEHMiningResourceType.h"
#include "EHGrid.h"
#include "InteractableObjectArray.h"
#include "VoxelTerrainDigData.h"
#include "EHPlanetoidGrid.generated.h"

class AEHVoxelWorld;
class UEHBlockItem;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHPlanetoidGrid : public AEHGrid {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlanetoidGenerated);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlanet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimarySeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondarySeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroundSpawnDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundSpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundSpawnFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundTypeFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerationDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerateTracePointsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnSurfaceDestructibles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnSurfaceVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnGroundResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourcesGenerationSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HigherNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> PlanetoidDetailSpawnChanceIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlanetoidSurfaceDetailSpawnChanceSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector PlanetoidSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlanetoidMapRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHBlockItem* PlanetoidDepositItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlanetoidGenerated OnPlanetoidGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlanetoidGeneratorCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VoxelWorld, meta=(AllowPrivateAccess=true))
    AEHVoxelWorld* VoxelWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CorrectionLocation, meta=(AllowPrivateAccess=true))
    FIntVector CorrectionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 PlanetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 PlanetoidTerrainID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHMiningResourceType, FVector2D> SpawnRatioForGroundResource;
    
public:
    AEHPlanetoidGrid();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateMPCorrectionPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TraceHeightFound(const FVector& ImpactPoint);
    
    UFUNCTION(BlueprintCallable)
    void TestingValue(const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDestructible(const FVector& position, const FVoxelTerrainDigData& DigData);
    
    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 SeedLow);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolation(EVoxelNoiseInterpolation Interp);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBox(const FIntVector& Coord);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VoxelWorld();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CorrectionLocation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugPlanetoidGenerate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugPlanetoidCoordGenerate(const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStreamingPlanetoidLoaded();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveBox(const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable)
    void ModifyBox(const FIntVector BoxMin, const FIntVector BoxMax, bool IsAdding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcedurallyGenerated();
    
private:
    UFUNCTION(BlueprintCallable)
    void HadleCollectiveColliderStateChanged(bool ColliderActive);
    
public:
    UFUNCTION(BlueprintCallable)
    FInteractableObjectArray GetWorldItems(const EEHMiningResourceType ResrouceType);
    
    UFUNCTION(BlueprintCallable)
    AEHVoxelWorld* GetVoxelWorld();
    
    UFUNCTION(BlueprintCallable)
    float GetTestNoiseValue(float X, float Y, float NoiseFrequency, bool UseSimplexNoise);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlanetoidSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIntVector> GetForbiddenVoxelCoordsForBox(const FVoxelIntBox& Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIntVector> GetCoordsFromTraceImpactPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesVoxelContainRock(const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable)
    void DebugRegenerateForSeed(const int32 NewPrimarySeed);
    
    UFUNCTION(BlueprintCallable)
    void DebugGeneratePlanetoid(const FIntPoint& Size);
    
    UFUNCTION(BlueprintCallable)
    void AsyncTraceTest();
    
    UFUNCTION(BlueprintCallable)
    void AddBox(const FIntVector& Coord);
    
};

