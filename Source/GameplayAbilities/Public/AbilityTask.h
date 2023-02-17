#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "AbilityTask.generated.h"

class UAbilitySystemComponent;
class UGameplayAbility;

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
    /*UAbilityTask();*/
};

