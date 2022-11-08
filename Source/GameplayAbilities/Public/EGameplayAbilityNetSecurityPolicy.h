#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityNetSecurityPolicy.generated.h"

UENUM(BlueprintType)
namespace EGameplayAbilityNetSecurityPolicy {
    enum Type {
        ClientOrServer,
        ServerOnlyExecution,
        ServerOnlyTermination,
        ServerOnly,
    };
}

