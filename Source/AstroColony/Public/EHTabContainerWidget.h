#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "TGUserWidget.h"
#include "Templates/SubclassOf.h"
#include "EHTabContainerWidget.generated.h"

class UEHTabCategoryViewModel;
class UHorizontalBox;
class USoundBase;
class UTGConfigurableTextBlock;
class UTGInputActionWidget;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHTabContainerWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalTabOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TabOptionsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin OptionsPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TabsFocusable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> TabAudio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGInputActionWidget* InputActionLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGInputActionWidget* InputActionRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* CurrentTabTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHTabCategoryViewModel* TabCategoryViewModel;
    
public:
    UEHTabContainerWidget();
    UFUNCTION(BlueprintCallable)
    void SelectTab(uint8 TabIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousTab();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter();
    
};

