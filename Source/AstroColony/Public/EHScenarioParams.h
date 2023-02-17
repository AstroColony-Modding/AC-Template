#pragma once
#include "CoreMinimal.h"
#include "EHGlobalPointInstance.h"
#include "EHItemInstance.h"
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
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainTypeSpawnChances[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShapeTypeSpawnChances[10];
    
    FEHScenarioParams();
};

