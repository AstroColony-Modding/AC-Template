#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityReplicationPolicy.generated.h"

UENUM(BlueprintType)
namespace EGameplayAbilityReplicationPolicy {
    enum Type {
        ReplicateNo,
        ReplicateYes,
    };
}

