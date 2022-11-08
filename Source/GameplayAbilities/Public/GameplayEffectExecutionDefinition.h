#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectExecutionScopedModifierInfo.h"
#include "ConditionalGameplayEffect.h"
#include "GameplayEffectExecutionDefinition.generated.h"

class UGameplayEffectExecutionCalculation;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectExecutionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffectExecutionCalculation> CalculationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PassedInTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> ConditionalGameplayEffectClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;
    
    FGameplayEffectExecutionDefinition();
};

