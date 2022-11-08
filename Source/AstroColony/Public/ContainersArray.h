#pragma once
#include "CoreMinimal.h"
#include "ContainersArray.generated.h"

class UEHItemsContainer;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FContainersArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHItemsContainer*> Containers;
    
    FContainersArray();
};

