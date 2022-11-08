#pragma once
#include "CoreMinimal.h"
#include "EEHVehiclePartScale.generated.h"

UENUM(BlueprintType)
enum class EEHVehiclePartScale : uint8 {
    None,
    UseXforXY,
    UseXforXZ,
    UseXforXYZ,
};

