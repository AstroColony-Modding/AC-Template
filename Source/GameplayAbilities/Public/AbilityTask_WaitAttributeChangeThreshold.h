#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "EWaitAttributeChangeComparison.h"
#include "GameplayAttribute.h"
#include "WaitAttributeChangeThresholdDelegateDelegate.h"
#include "AbilityTask_WaitAttributeChangeThreshold.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAbilityTask_WaitAttributeChangeThreshold;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitAttributeChangeThresholdDelegate OnChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitAttributeChangeThreshold();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner);
    
};

