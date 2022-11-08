#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHInteractableChildActorInterface.generated.h"

class UEHDataObject;
class UEHInteractableObject;

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHInteractableChildActorInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHInteractableChildActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRecovered(UEHDataObject* DataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPrepareForSave(UEHDataObject* DataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActiveStateChanged(const bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(UEHInteractableObject* InInteractableObject);
    
};

