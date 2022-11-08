#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "AbilityAsync.h"
#include "GameplayTagRequirements.h"
#include "GameplayEffectSpecHandle.h"
#include "GameplayTargetDataFilterHandle.h"
#include "AbilityAsync_WaitGameplayEffectApplied.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayEffectApplied;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAppliedDelegate, AActor*, Source, FGameplayEffectSpecHandle, SpecHandle, FActiveGameplayEffectHandle, ActiveHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAppliedDelegate OnApplied;
    
    UAbilityAsync_WaitGameplayEffectApplied();
    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(AActor* TargetActor, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);
    
};

