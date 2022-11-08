#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TGHUD.generated.h"

class UTGHUDWidget;

UCLASS(Blueprintable, NonTransient)
class TGCOREUI_API ATGHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBootingSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTGHUDWidget> HUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCinematicHideInGameWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCustomSlateNavigationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTGHUDWidget* HUDWidgetInstance;
    
public:
    ATGHUD();
    UFUNCTION(BlueprintCallable)
    void ShowHUDWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHUDWidgetSpawned(UTGHUDWidget* SpawnedHUDWidget);
    
    UFUNCTION(BlueprintCallable)
    void HideHUDWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplicationActivationStateChanged(bool IsActive);
    
};

