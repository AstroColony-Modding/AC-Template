#pragma once
#include "CoreMinimal.h"
#include "EHBasicUnlockData.generated.h"

class UEHAsset;
class UTexture2D;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHBasicUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHAsset* UnlockItem;
    
    FEHBasicUnlockData();
};

