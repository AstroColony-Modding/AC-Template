#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractBaseWidget.h"
#include "EHContainerWidget.generated.h"

class UEHItemsContainer;
class UEHItem;
class UUniformGridPanel;
class UEHItemTooltipWidget;
class UContainerSlotWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHContainerWidget : public UInteractBaseWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnContainerSlotClicked, UEHItemsContainer*, Container, UEHItem*, Item, uint8, Index);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* GridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UContainerSlotWidget> ContainerSlotWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHItemTooltipWidget> SlotTooltipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TextAlwaysVisible;
    
    UPROPERTY(EditAnywhere)
    uint8 Columns;
    
    UPROPERTY(EditAnywhere)
    uint8 Rows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilterPhrase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotsLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHItemTooltipWidget* SlotTooltipWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContainerSlotClicked OnContainerSlotClicked;
    
    UEHContainerWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateSlotsSelectionForItem(UEHItem* Item);
    
};

