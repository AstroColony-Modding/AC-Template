#pragma once
#include "CoreMinimal.h"
#include "EHItemInstance.h"
#include "EHGlobalPointInstance.h"
#include "EHScenarioParams.generated.h"

class UEHTechnologyAsset;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHScenarioParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SeedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SeedNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerConsumesOxygen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FreeConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHItemInstance> DefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHGlobalPointInstance> DefaultGlobalPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHTechnologyAsset*> UnlockedTechnologies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldGenerateChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkElementsCount;
    
    UPROPERTY(EditAnywhere)
    float TerrainTypeSpawnChances[6];
    
    UPROPERTY(EditAnywhere)
    float ShapeTypeSpawnChances[10];
    
    FEHScenarioParams();
};

