#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHGameplayAspectUnlock.generated.h"

class UEHAsset;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHGameplayAspectUnlock : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEHAsset> UnlockItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnlockName;
    
    FEHGameplayAspectUnlock();
};

