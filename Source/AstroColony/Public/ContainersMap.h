#pragma once
#include "CoreMinimal.h"
#include "ContainersMap.generated.h"

class UEHItemsContainer;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FContainersMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UEHItemsContainer*> ContainerCategories;
    
    FContainersMap();
};

