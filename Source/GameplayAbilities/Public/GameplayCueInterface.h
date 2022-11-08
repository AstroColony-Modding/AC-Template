#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EGameplayCueEvent.h"
#include "GameplayCueParameters.h"
#include "GameplayCueInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGameplayCueInterface : public UInterface {
    GENERATED_BODY()
};

class IGameplayCueInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCosmetic)
    virtual void ForwardGameplayCueToParent() PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
    /*UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);*/
    
};

