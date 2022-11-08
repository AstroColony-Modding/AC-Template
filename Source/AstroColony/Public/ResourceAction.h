#pragma once
#include "CoreMinimal.h"
#include "ResourceAction.generated.h"

class UEHItem;
class UEHItemsContainer;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FResourceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStoringResource;
    
    FResourceAction();
};

