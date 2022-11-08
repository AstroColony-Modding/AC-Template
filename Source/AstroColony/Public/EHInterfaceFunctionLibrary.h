#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHInterfaceFunctionLibrary.generated.h"

class UEHSignalNetwork;
class UObject;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHInterfaceFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEHInterfaceFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEHSignalNetwork* Signal_GetNetwork(UObject* SignalDevice, bool IsIn);
    
};

