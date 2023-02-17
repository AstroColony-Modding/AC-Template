#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "EGameplayModOp.h"
#include "GameplayAttribute.h"
#include "GameplayModifierEvaluatedData.generated.h"

USTRUCT(BlueprintType)
struct FGameplayModifierEvaluatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    GAMEPLAYABILITIES_API FGameplayModifierEvaluatedData();
};

