#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilitySpecHandleAndPredictionKey.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilitySpecHandleAndPredictionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AbilityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PredictionKeyAtCreation;
    
    FGameplayAbilitySpecHandleAndPredictionKey();
};

