#pragma once
#include "CoreMinimal.h"
#include "TGUserWidgetFocusable.h"
#include "TGGridSlotWidget.generated.h"

class UBorder;
class UTGGridWidget;

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGGridSlotWidget : public UTGUserWidgetFocusable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSlotClicked);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlotClicked OnSlotClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSlotEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSlotActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* FocusBorder;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTGGridWidget> GridReference;
    
public:
    UTGGridSlotWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HoverFocus();
    
    UFUNCTION(BlueprintCallable)
    void HoverActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandleAreaUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleAreaHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleAreaClicked();
    
};

