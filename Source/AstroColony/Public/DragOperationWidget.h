#pragma once
#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "DragOperationWidget.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UDragOperationWidget : public UDragDropOperation {
    GENERATED_BODY()
public:
    UDragOperationWidget();
};

