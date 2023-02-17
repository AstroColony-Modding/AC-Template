#include "AbilityTask_WaitAttributeChangeThreshold.h"

class AActor;
class UAbilityTask_WaitAttributeChangeThreshold;
class UGameplayAbility;

UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::WaitForAttributeChangeThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner) {
    return NULL;
}

UAbilityTask_WaitAttributeChangeThreshold::UAbilityTask_WaitAttributeChangeThreshold() {
    this->ExternalOwner = NULL;
}

