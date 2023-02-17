#pragma once
#include "CoreMinimal.h"
#include "EGameplayCuePayloadType.h"
#include "GameplayCueParameters.h"
#include "GameplayEffectSpecForRPC.h"
#include "PredictionKey.h"
#include "GameplayCuePendingExecute.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FGameplayCuePendingExecute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayCuePayloadType PayloadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpecForRPC FromSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters CueParameters;
    
    GAMEPLAYABILITIES_API FGameplayCuePendingExecute();
};

