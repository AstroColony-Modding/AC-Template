#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityInstancingPolicy.generated.h"

UENUM(BlueprintType)
namespace EGameplayAbilityInstancingPolicy {
    enum Type {
        NonInstanced,
        InstancedPerActor,
        InstancedPerExecution,
    };
}

