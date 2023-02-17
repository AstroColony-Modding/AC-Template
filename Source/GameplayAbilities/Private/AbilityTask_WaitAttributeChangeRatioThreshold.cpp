#include "AbilityTask_WaitAttributeChangeRatioThreshold.h"

class AActor;
class UAbilityTask_WaitAttributeChangeRatioThreshold;
class UGameplayAbility;

UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner) {
    return NULL;
}

UAbilityTask_WaitAttributeChangeRatioThreshold::UAbilityTask_WaitAttributeChangeRatioThreshold() {
    this->ExternalOwner = NULL;
}

