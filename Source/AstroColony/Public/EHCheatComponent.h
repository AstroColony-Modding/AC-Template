#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TGUICheatComponent.h"
#include "EHItemInstance.h"
#include "EHCheatComponent.generated.h"

class UUserWidget;
class AEHHUD;
class UEHUISystem;
class UEHLayerManager;
class UEHGameInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHCheatComponent : public UTGUICheatComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DebugWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEHHUD* EHHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHUISystem* UISystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHLayerManager* LayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHGameInstance* GameInstance;
    
public:
    UEHCheatComponent();
    UFUNCTION(BlueprintCallable, Exec)
    void UIToggleDebugWidget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UIToggleAuthenticationPrompt();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UIShowMockNotificationDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void UIShowHUD();
    
    UFUNCTION(Exec)
    void UIOpenScreen(uint8 ScreenID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void UIHideHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UIDebugTestPopupQueue();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UIDebugShowPopup(const FString& Title, const FString& Body);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UIDebugClosePopup();
    
    UFUNCTION(Exec)
    void SetResScale(uint8 resscale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEHItemInstance> GetAllResources(int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void CheatUnlockAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void CheatTechPts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void CheatResources();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void CheatKillPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void CheatCompleteScenario();
    
};

