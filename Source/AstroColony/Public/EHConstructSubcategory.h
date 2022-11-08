#pragma once
#include "CoreMinimal.h"
#include "EHConstructSubcategory.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHConstructSubcategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FEHConstructSubcategory();
};

