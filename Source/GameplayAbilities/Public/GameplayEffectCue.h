#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAttribute.h"
#include "GameplayEffectCue.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute MagnitudeAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayCueTags;
    
    GAMEPLAYABILITIES_API FGameplayEffectCue();
};

