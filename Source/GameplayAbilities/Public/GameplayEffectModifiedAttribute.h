#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "GameplayEffectModifiedAttribute.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectModifiedAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMagnitude;
    
    FGameplayEffectModifiedAttribute();
};

