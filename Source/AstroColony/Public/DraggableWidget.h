#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DraggableWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UDraggableWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDraggableWidget();
};

