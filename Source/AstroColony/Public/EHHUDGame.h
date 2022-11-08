#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHHUD.h"
#include "EHSaveGameInterface.h"
#include "EHGameHUDInterface.h"
#include "EEHPopMenuType.h"
#include "EEHHUDMenuType.h"
#include "EHHUDGame.generated.h"

class UObject;
class UInteractBaseWidget;
class UEHInteractableObject;
class UUserWidget;
class UEHHUDIndicatorsWidget;
class UMenuWidget;
class UEHMapWidget;
class UEHModularVehicleWidget;
class UTipWidget;
class UCanvasPanel;

UCLASS(Blueprintable, NonTransient)
class AEHHUDGame : public AEHHUD, public IEHSaveGameInterface, public IEHGameHUDInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPopMenuOpened, EEHPopMenuType, Type);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPopMenuClosed, TSubclassOf<UInteractBaseWidget>, IndicatedObject);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMouseShowStateChanged, bool, IsMouseShown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuOpenStateChanged, bool, IsOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIndicatorStateChanged, UObject*, IndicatedObject);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, EEHPopMenuType> OpenedPopupMenus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIndicatorStateChanged OnIndicatorStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHInteractableObject* OpenedMenuInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowBlackScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuWidget* OpenedMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* OpenedScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHMapWidget* MapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHModularVehicleWidget* ModularVehicleWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopMenuOpened PopMenuOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopMenuClosed PopMenuClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseShowStateChanged OnMouseShowStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuOpenStateChanged OnMenuOpenStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEHMapWidget> MapWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEHModularVehicleWidget> ModularVehicleWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHHUDIndicatorsWidget* HUDIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTipWidget>> TipWidgets;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UMenuWidget> PopMenuClasses[5];
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UMenuWidget> HUDMenuClasses[10];
    
public:
    AEHHUDGame();
    UFUNCTION(BlueprintCallable)
    void UnregisterScreenIndicator(UObject* IndicatedObject);
    
    UFUNCTION(BlueprintCallable)
    UMenuWidget* ToggleMenuByType(EEHHUDMenuType HUDMenuType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScreenIndicator(UObject* IndicatedObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPauseMenuSafe();
    
    UFUNCTION(BlueprintCallable)
    UMenuWidget* OpenMenuByType(EEHHUDMenuType HUDMenuType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenInteractMenu(UEHInteractableObject* InteractableObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenIndicatorRegistered(UObject* IndicatedObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UCanvasPanel* GetVisibleScreenCanvas();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEHPopMenuType GetPopMenuType(const TSubclassOf<UMenuWidget> Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMenuWidget> GetPopMenuClass(const EEHPopMenuType Type);
    
    UFUNCTION(BlueprintCallable)
    void CreateModularVehicleWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateMapWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseOpenedInteractionMenu();
    
    
    // Fix for true pure virtual functions not being implemented
};

