#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHModsOptionWidget.generated.h"

class UEHModsOptionViewModel;
class UTGViewModel;
class UTGWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHModsOptionWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidget* InteractiveArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsOptionViewModel* ModsOptionViewModel;
    
public:
    UEHModsOptionWidget();
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

