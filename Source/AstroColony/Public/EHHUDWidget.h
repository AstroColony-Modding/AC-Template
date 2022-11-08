#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TGHUDWidget.h"
#include "EHHUDWidget.generated.h"

class UInteractBaseWidget;
class UEHScenarioOverlayWidget;
class UEHHUDIndicatorsWidget;
class UEHPhotoModeWidget;
class UCanvasPanel;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHHUDWidget : public UTGHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHHUDIndicatorsWidget* HUDIndicators;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHScenarioOverlayWidget* ScenarioOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHPhotoModeWidget* PhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* GameCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PausePrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PlayerActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* InteractionCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* HUDCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MissionsLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HandledActions;
    
public:
    UEHHUDWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UInteractBaseWidget> RemovePopMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UInteractBaseWidget> RemoveMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddPopMenu(UUserWidget* MenuWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddMenu(UUserWidget* MenuWidget);
    
};

