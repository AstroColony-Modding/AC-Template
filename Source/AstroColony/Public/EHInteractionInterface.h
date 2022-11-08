#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHInteractionInterface.generated.h"

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetInteractionCircleStepsNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetInteractionCircleStep();
    
};

