#include "AbilityTask_WaitOverlap.h"

class AActor;
class UAbilityTask_WaitOverlap;
class UGameplayAbility;
class UPrimitiveComponent;

UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(UGameplayAbility* OwningAbility) {
    return NULL;
}

void UAbilityTask_WaitOverlap::OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UAbilityTask_WaitOverlap::UAbilityTask_WaitOverlap() {
}

