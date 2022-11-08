#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DraggableItemPayload.generated.h"

class UEHItemsContainer;

UCLASS(Blueprintable)
class ASTROCOLONY_API UDraggableItemPayload : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* ItemsContainer;
    
    UDraggableItemPayload();
};

