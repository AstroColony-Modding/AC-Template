#include "AbilityTask_WaitMovementModeChange.h"

class ACharacter;
class UAbilityTask_WaitMovementModeChange;
class UGameplayAbility;

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode) {
    return NULL;
}

UAbilityTask_WaitMovementModeChange::UAbilityTask_WaitMovementModeChange() {
}

