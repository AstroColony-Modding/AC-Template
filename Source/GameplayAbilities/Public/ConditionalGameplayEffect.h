#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
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

