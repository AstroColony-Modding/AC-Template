#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "GameplayTagContainer.h"
#include "EAttributeBasedFloatCalculationType.h"
#include "EGameplayModEvaluationChannel.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "ScalableFloat.h"
#include "AttributeBasedFloat.generated.h"

USTRUCT(BlueprintType)
struct FAttributeBasedFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Coefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PreMultiplyAdditiveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PostMultiplyAdditiveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectAttributeCaptureDefinition BackingAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle AttributeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeBasedFloatCalculationType AttributeCalculationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayModEvaluationChannel FinalChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceTagFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTagFilter;
    
    GAMEPLAYABILITIES_API FAttributeBasedFloat();
};

