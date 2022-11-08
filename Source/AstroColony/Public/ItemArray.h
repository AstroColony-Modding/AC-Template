#pragma once
#include "CoreMinimal.h"
#include "ItemArray.generated.h"

class UEHItem;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FItemArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UEHItem>> Items;
    
    FItemArray();
};

