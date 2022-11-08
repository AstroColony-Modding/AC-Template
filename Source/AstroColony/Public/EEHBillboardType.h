#pragma once
#include "CoreMinimal.h"
#include "EEHBillboardType.generated.h"

UENUM(BlueprintType)
enum class EEHBillboardType : uint8 {
    Electricity,
    Water,
    Hunger,
    Sleep,
    Oxygen,
    Grain,
    Plant,
    Animal,
    Profession,
    NoPath,
    Transferred,
    Construction,
    EnergyReceiver,
    Resources,
    _MAX UMETA(Hidden),
};

