#pragma once
#include "CoreMinimal.h"
#include "EHRecipe.h"
#include "EHRecipeReplicationData.h"
#include "EHProductionReplicationData.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHProductionReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHRecipeReplicationData> ReplicatedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DedicatedSpecialistsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHRecipe> DynamicRecipes;
    
    FEHProductionReplicationData();
};

