#pragma once
#include "CoreMinimal.h"
#include "UnlockedTechnologiesData.generated.h"

class UTechnologyAsset;

USTRUCT(BlueprintType)
struct FUnlockedTechnologiesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UTechnologyAsset*> UnlockedTechnologies;
    
    TECHTREE_API FUnlockedTechnologiesData();
};

