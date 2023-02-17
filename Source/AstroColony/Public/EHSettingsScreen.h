#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHSettingsScreen.generated.h"

class UEHSettingsCategoryWidget;
class UEHSettingsViewModel;
class UEHTabContainerWidget;
class UTGViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSettingsScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSettingsViewModel* SettingsViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHSettingsCategoryWidget* SettingsCategory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHTabContainerWidget* SettingsTabs;
    
public:
    UEHSettingsScreen();
private:
    UFUNCTION(BlueprintCallable)
    void ShowRestoreToDefaultPopup();
    
    UFUNCTION(BlueprintCallable)
    void HandleTabSelected(UTGViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable)
    void HandleSaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void HandlePopupAction(FName Action);
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadSettings();
    
    UFUNCTION(BlueprintCallable)
    void HandleCategoryOptionButtonPressed(UTGViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable)
    void HandleBack();
    
};

