#pragma once
#include "CoreMinimal.h"
#include "EHRecipeRequirements.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHRecipeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireElectricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireSpecialist;
    
    FEHRecipeRequirements();
};

