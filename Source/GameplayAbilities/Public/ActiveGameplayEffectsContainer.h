#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ActiveGameplayEffect.h"
#include "ActiveGameplayEffectsContainer.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FActiveGameplayEffectsContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffect> GameplayEffects_Internal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayEffect*> ApplicationImmunityQueryEffects;
    
public:
    FActiveGameplayEffectsContainer();
};

