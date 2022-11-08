#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "EHGameHUDInterface.generated.h"

class UObject;
class UInteractBaseWidget;
class UEHInteractableObject;
class UMenuWidget;

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHGameHUDInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHGameHUDInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TogglePopMenu(TSubclassOf<UInteractBaseWidget> MenuWidget, UEHInteractableObject* InteractableObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TogglePhotoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleMouse(bool ShowMouse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleModularVehicleDesigner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMenuWidget* ToggleMenu(TSubclassOf<UMenuWidget> MenuWidget, UObject* PayloadObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleLog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPopMenu(TSubclassOf<UInteractBaseWidget> MenuWidget, UEHInteractableObject* InteractableObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMenuWidget* OpenMenu(TSubclassOf<UMenuWidget> MenuWidget, UObject* PayloadObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePopMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseCurrentMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeCursorState(bool IsActive);
    
};

