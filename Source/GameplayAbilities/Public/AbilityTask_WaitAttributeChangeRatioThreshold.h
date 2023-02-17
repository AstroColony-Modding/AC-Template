#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "EWaitAttributeChangeComparison.h"
#include "GameplayAttribute.h"
#include "WaitAttributeChangeRatioThresholdDelegateDelegate.h"
#include "AbilityTask_WaitAttributeChangeRatioThreshold.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAbilityTask_WaitAttributeChangeRatioThreshold;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitAttributeChangeRatioThresholdDelegate OnChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitAttributeChangeRatioThreshold();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner);
    
};

