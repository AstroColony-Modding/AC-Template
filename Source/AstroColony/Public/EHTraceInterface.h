#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPlayerActionType.h"
#include "EHTraceInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHTraceInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHTraceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldTraceObject(UObject* TracedObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTraceOverrideActions(UObject* TracedObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<EPlayerActionType, FText> GetTraceActionNames();
    
};

