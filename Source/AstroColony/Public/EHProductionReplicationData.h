#pragma once
#include "CoreMinimal.h"
#include "EHRecipeReplicationData.h"
#include "EHRecipe.h"
#include "EHProductionReplicationData.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHProductionReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHRecipeReplicationData> ReplicatedRecipes;
    
    UPROPERTY(EditAnywhere)
    uint8 DedicatedSpecialistsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHRecipe> DynamicRecipes;
    
    FEHProductionReplicationData();
};

