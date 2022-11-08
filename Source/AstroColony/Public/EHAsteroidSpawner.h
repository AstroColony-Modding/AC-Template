#pragma once
#include "CoreMinimal.h"
#include "EHAsteroidExtraction.h"
#include "Engine/NetSerialization.h"
#include "EHWorldInteractiveActor.h"
#include "EHSaveGameInterface.h"
#include "EHAsteroidData.h"
#include "UObject/NoExportTypes.h"
#include "EEHMiningResourceType.h"
#include "EHAttractedAsteroidData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHAsteroidSpawner.generated.h"

class UEHHISMComponent;
class UEHDataProvider;
class UEHGridComponent;
class UEHAsteroidsCatcher;
class UEHResourceItem;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHAsteroidSpawner : public AEHWorldInteractiveActor, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHMiningResourceType, FVector2D> AsteroidResourcesDistributionFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHMiningResourceType, FVector2D> AsteroidResourcesDistributionSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHHISMComponent* HISMAsteroids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHHISMComponent* HISMAttracted_Asteroids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHHISMComponent* HISMAttracted_Beams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldSpawnAsteroids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUpdateAsteroidsPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnSecondChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawningInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseAsteroidsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VanishRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldDespawnCollidingAsteroids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnLinetraceDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpharetraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityCharacterOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomCharacterPositionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebugAsteroidVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsteroidVelocityScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsteroidVelocityScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsteroidSpinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsteroidRandomizeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourceIncreaseSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceUpdateOften;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceUpdateNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceUpdateRare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHAsteroidExtraction> AsteroidExtractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHAsteroidData> AsteroidDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHAttractedAsteroidData> Attracted_AsteroidDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AsteroidUpdateTimes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHDataProvider* DataProvider;
    
public:
    AEHAsteroidSpawner();
    UFUNCTION(BlueprintCallable)
    int32 UpdateColorFromAsteroidData(UPARAM(Ref) FEHAsteroidData& AsteroidData);
    
    UFUNCTION(BlueprintCallable)
    void ShrinkExtractedAsteroid(const int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HitAsteroid(UEHGridComponent* GridComponent, const int32 InstanceIndex, const FVector& ImpactPoint);
    
    UFUNCTION(BlueprintCallable)
    void Server_AddAsteroid(const FTransform& Transform, const FEHAsteroidData& AsteroidData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttractedAsteroid(const int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsteroidExtracted(const int32 InstanceIndex, const FVector& ImpactPoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveProcessedAsteroid(UEHAsteroidsCatcher* AsteroidCatcher);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveCatcherAttractedAsteroid(UEHAsteroidsCatcher* AsteroidCatcher);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveAttractedAsteroid(const int32 InstanceIndex);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveAsteroids(const TArray<int32>& AsteroidsToRemove, const TArray<FVector_NetQuantize>& ImpactPoints);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveAsteroid(const int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_NotifyExtractionDataChanged(const int32 InstanceIndex, const FEHAsteroidData& AsteroidData, const FEHAsteroidExtraction& AsteroidExtraction, const FVector& ImpactPoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_NotifyAsteroidCatched(UEHAsteroidsCatcher* AsteroidCatcher);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_HitAsteroid(const int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_CancelAttractedAsteroid(UEHAsteroidsCatcher* AsteroidCatcher);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddAttractedAsteroid(UEHAsteroidsCatcher* AsteroidCatcher, const FTransform& Transform, const FEHAsteroidData& AsteroidData);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddAsteroid(const FTransform& Transform, const FEHAsteroidData& AsteroidData, const FEHAsteroidExtraction& AsteroidExtraction);
    
    UFUNCTION(BlueprintCallable)
    void HandleAssetsLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    FEHAsteroidData GenerateAsteroidData();
    
    UFUNCTION(BlueprintCallable)
    UEHResourceItem* ExtractResource(const int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CollidingAsteroidDestroyed(const int32 InstanceIndex, const FVector ImpactPoint);
    
    
    // Fix for true pure virtual functions not being implemented
};

