#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "ConditionalGameplayEffect.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FConditionalGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredSourceTags;
    
    FConditionalGameplayEffect();
};

