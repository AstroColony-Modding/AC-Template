#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityNetExecutionPolicy.generated.h"

UENUM(BlueprintType)
namespace EGameplayAbilityNetExecutionPolicy {
    enum Type {
        LocalPredicted,
        LocalOnly,
        ServerInitiated,
        ServerOnly,
    };
}

