#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierEvaluatedData.h"
#include "GameplayEffectCustomExecutionOutput.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectCustomExecutionOutput {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayModifierEvaluatedData> OutputModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerConditionalGameplayEffects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHandledStackCountManually: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHandledGameplayCuesManually: 1;
    
public:
    FGameplayEffectCustomExecutionOutput();
};

