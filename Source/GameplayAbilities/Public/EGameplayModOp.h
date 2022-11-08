#pragma once
#include "CoreMinimal.h"
#include "EGameplayModOp.generated.h"

UENUM(BlueprintType)
namespace EGameplayModOp {
    enum Type {
        Additive,
        Multiplicitive,
        Division,
        Override,
        Max,
    };
}

