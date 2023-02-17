#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGameplayEffectScopedModifierAggregatorType.h"
#include "EGameplayModOp.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectModifierMagnitude.h"
#include "GameplayModEvaluationChannelSettings.h"
#include "GameplayTagRequirements.h"
#include "GameplayEffectExecutionScopedModifierInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectExecutionScopedModifierInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectAttributeCaptureDefinition CapturedAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TransientAggregatorIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayEffectScopedModifierAggregatorType AggregatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectModifierMagnitude ModifierMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements SourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements TargetTags;
    
    GAMEPLAYABILITIES_API FGameplayEffectExecutionScopedModifierInfo();
};

