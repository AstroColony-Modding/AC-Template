#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "ESettingWidgetType.h"
#include "Templates/SubclassOf.h"
#include "EHSettingsOptionWidget.generated.h"

class UCanvasPanel;
class UEHOptionWidget;
class UEHSettingsOptionViewModel;
class UTGViewModel;
class UTGWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSettingsOptionWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESettingWidgetType, TSubclassOf<UEHOptionWidget>> SettingsWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* OptionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHOptionWidget* OptionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidget* InteractiveArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsOptionViewModel* SettingsOptionViewModel;
    
public:
    UEHSettingsOptionWidget();
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
    void HandleIsCollapsedChange(const bool IsCollapsed);
    
    UFUNCTION(BlueprintCallable)
    void HandleHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleClicked();
    
};

