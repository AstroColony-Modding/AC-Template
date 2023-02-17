#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHSceneInteractionInterface.generated.h"

class UPrimitiveComponent;
class USceneComponent;

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHSceneInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHSceneInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasClickInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetSetupComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetPrimitiveComponent();
    
};

