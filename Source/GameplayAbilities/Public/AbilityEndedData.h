#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "AbilityEndedData.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FAbilityEndedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* AbilityThatEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AbilitySpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateEndAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasCancelled;
    
    GAMEPLAYABILITIES_API FAbilityEndedData();
};

