#pragma once
#include "CoreMinimal.h"
#include "EMovementReplicationMethod.generated.h"

UENUM(BlueprintType)
enum class EMovementReplicationMethod : uint8 {
    ClientSidePredictionAntiCheat,
    ServerSideReplication,
};

