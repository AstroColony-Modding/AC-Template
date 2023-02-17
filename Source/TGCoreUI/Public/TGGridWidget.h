#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "TGGridWidgetFocus.h"
#include "TGGridWidgetScroll.h"
#include "TGUserWidget.h"
#include "Templates/SubclassOf.h"
#include "TGGridWidget.generated.h"

class UScrollBox;
class USizeBox;
class UTGGridSlotWidget;
class UTGInvisibleSlotWidget;
class UTGUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGGridWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotActivated, int32, ActivatedSlotIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlotActivated OnSlotActivated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGUniformGridPanel* GridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* GridSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> SlotHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> SlotVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SlotPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTGGridWidgetScroll BCGridWidgetScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTGGridWidgetFocus BCGridWidgetFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPreviewSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTGGridSlotWidget*> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGGridSlotWidget> TGGridSlotWidgetTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGInvisibleSlotWidget> TGInvisibleSlotWidgetTemplate;
    
public:
    UTGGridWidget();
    UFUNCTION(BlueprintCallable)
    void RemoveSlot(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void InsertSlot(const int32 SlotIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float CurrentOffset);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableSlot(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void DisableSlot(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSlot(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    UTGGridSlotWidget* AddSlot(TSubclassOf<UTGGridSlotWidget> TGGridSlotWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSlot(const int32 SlotIndex);
    
};

