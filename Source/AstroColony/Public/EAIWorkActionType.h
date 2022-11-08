#pragma once
#include "CoreMinimal.h"
#include "EAIWorkActionType.generated.h"

UENUM(BlueprintType)
enum class EAIWorkActionType : uint8 {
    None,
    CallAction,
    ResourceAction,
    AIDemandAction,
    SelfAction,
    TransferAction,
};

