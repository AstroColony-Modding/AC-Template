#pragma once
#include "CoreMinimal.h"
#include "AttributeBasedFloat.h"
#include "CustomCalculationBasedFloat.h"
#include "EGameplayEffectMagnitudeCalculation.h"
#include "ScalableFloat.h"
#include "SetByCallerFloat.h"
#include "GameplayEffectModifierMagnitude.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectModifierMagnitude {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ScalableFloatMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeBasedFloat AttributeBasedMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomCalculationBasedFloat CustomMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetByCallerFloat SetByCallerMagnitude;
    
public:
    FGameplayEffectModifierMagnitude();
};

