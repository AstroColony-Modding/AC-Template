#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagEventType.generated.h"

UENUM(BlueprintType)
namespace EGameplayTagEventType {
    enum Type {
        NewOrRemoved,
        AnyCountChange,
    };
}

