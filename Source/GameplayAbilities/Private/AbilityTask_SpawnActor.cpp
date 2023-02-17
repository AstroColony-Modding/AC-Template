#include "AbilityTask_SpawnActor.h"
#include "Templates/SubclassOf.h"

class AActor;
class UAbilityTask_SpawnActor;
class UGameplayAbility;

UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class) {
    return NULL;
}

void UAbilityTask_SpawnActor::FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor) {
}

bool UAbilityTask_SpawnActor::BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<AActor> Class, AActor*& SpawnedActor) {
    return false;
}

UAbilityTask_SpawnActor::UAbilityTask_SpawnActor() {
}

