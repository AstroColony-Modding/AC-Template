#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_WaitGameplayTag.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTag : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OptionalExternalTarget;
    
public:
    UAbilityTask_WaitGameplayTag();
    UFUNCTION(BlueprintCallable)
    void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount);
    
};

