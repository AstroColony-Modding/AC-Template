#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DraggableItemWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UDraggableItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
public:
    UDraggableItemWidget();
};

