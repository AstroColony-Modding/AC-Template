#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHMultiplayerScreen.generated.h"

class UEHBaseButtonWidget;
class UEHMultiplayerViewModel;
class UEHSaveLoadListWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHMultiplayerScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHMultiplayerViewModel* MultiplayerViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* HostGameButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHSaveLoadListWidget* LoadList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* RemoveFileButton;
    
public:
    UEHMultiplayerScreen();
    UFUNCTION(BlueprintCallable)
    void UpdateButtonBar(bool ShowBack);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameInstanceTravelData();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRemoveFileClicked(UEHBaseButtonWidget* ButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleHostGameButtonPressed(UEHBaseButtonWidget* Button);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedSavegameName();
    
};

