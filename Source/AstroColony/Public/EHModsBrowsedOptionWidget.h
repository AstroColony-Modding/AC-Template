#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TGUserWidget.h"
#include "ESettingWidgetType.h"
#include "EHModsBrowsedOptionWidget.generated.h"

class UTGWidget;
class UEHOptionWidget;
class UTGViewModel;
class UEHModsBrowsedOptionViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHModsBrowsedOptionWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESettingWidgetType, TSubclassOf<UEHOptionWidget>> SettingsWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidget* InteractiveArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsBrowsedOptionViewModel* ModsOptionViewModel;
    
public:
    UEHModsBrowsedOptionWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelection(const bool IsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SelectOption();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleSelectionChange(const bool IsSelected);
    
    UFUNCTION(BlueprintCallable)
    void HandleOptionsChange();
    
    UFUNCTION(BlueprintCallable)
    void HandleOptionButtonPressed(UTGViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable)
    void HandleIsEnabledChange(const bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleClicked();
    
};

