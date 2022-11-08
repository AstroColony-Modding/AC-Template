#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AbilityAsync.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UAbilityAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UAbilityAsync();
    UFUNCTION(BlueprintCallable)
    void EndAction();
    
};

