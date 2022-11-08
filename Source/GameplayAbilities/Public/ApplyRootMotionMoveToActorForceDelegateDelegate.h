#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ApplyRootMotionMoveToActorForceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FApplyRootMotionMoveToActorForceDelegate, bool, DestinationReached, bool, TimedOut, FVector, FinalTargetLocation);

