#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EHIndicationConfigData.h"
#include "EHIndicationInterface.generated.h"

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHIndicationInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHIndicationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRegisteringForbidden();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetIndicationText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetIndicationPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEHIndicationConfigData GetIndicationConfigData();
    
};

