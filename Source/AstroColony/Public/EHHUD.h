#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ConfigUIInterface.h"
#include "TGHUD.h"
#include "EEHHUDMenuType.h"
#include "EEHUIScreenID.h"
#include "Templates/SubclassOf.h"
#include "EHHUD.generated.h"

class UDraggableItemWidget;
class UEHBackgroundComponent;
class UEHCheatComponent;
class UEHConfig;
class UEHHUDWidget;
class UTGUIConfigCustom;
class UTGWidgetPredefinedAnimationsComponent;

UCLASS(Blueprintable, NonTransient)
class AEHHUD : public ATGHUD, public IConfigUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDraggableItemWidget> DraggableItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EEHHUDMenuType> MenuTypesForActions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHConfig* EHConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTGUIConfigCustom*> CustomConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowFrontendByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHUIScreenID FirstScreenToOpen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHCheatComponent* EHCheatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBackgroundComponent* EHBackgroundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidgetPredefinedAnimationsComponent* TGWidgetAnimationsManager;
    
public:
    AEHHUD();
    UFUNCTION(BlueprintCallable)
    void UpdateHUDVisibility(const bool ShowHUDIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerAction(const FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void OpenPauseScreen();
    
    UFUNCTION(BlueprintCallable)
    void OpenInGameScreen(const EEHUIScreenID ScreenID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HoldTimersCleared();
    
    UFUNCTION(BlueprintCallable)
    void HandleKeyAction(const FKey& InKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGamePreStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHHUDWidget* GetEHHUDWidget();
    
    UFUNCTION(BlueprintCallable)
    void CloseInGameScreen();
    
    
    // Fix for true pure virtual functions not being implemented
};

