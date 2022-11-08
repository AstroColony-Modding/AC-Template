#pragma once
#include "CoreMinimal.h"
#include "ERootMotionMoveToActorTargetOffsetType.generated.h"

UENUM(BlueprintType)
enum class ERootMotionMoveToActorTargetOffsetType : uint8 {
    AlignFromTargetToSource,
    AlignToTargetForward,
    AlignToWorldSpace,
};

