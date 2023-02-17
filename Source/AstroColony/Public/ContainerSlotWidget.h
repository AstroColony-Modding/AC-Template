#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHItemInstance.h"
#include "Templates/SubclassOf.h"
#include "ContainerSlotWidget.generated.h"

class UBorder;
class UDraggableItemPayload;
class UEHItemVariantsWidget;
class UEHItemsContainer;
class UImage;
class UOverlay;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UContainerSlotWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* ItemsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomNumberText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHItemVariantsWidget> VariantsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsConstructionItemUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTextAlwaysVisible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHItemInstance Item;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TextBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NumberText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* VariantsOverlay;
    
public:
    UContainerSlotWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateSlotState();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCustomText(const FText& InCustomText);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlotSelectionChanged(const bool IsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickSplit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickDetails();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleItemDragEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDragBegin(UDraggableItemPayload* DraggableItemPayload);
    
};

