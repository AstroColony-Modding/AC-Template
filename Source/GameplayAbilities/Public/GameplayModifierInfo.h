#pragma once
#include "CoreMinimal.h"
#include "EGameplayModOp.h"
#include "GameplayAttribute.h"
#include "GameplayEffectModifierMagnitude.h"
#include "GameplayModEvaluationChannelSettings.h"
#include "GameplayTagRequirements.h"
#include "ScalableFloat.h"
#include "GameplayModifierInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayModifierInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectModifierMagnitude ModifierMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements SourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements TargetTags;
    
    FGameplayModifierInfo();
};

