#pragma once
#include "CoreMinimal.h"
#include "EEHHUDMenuType.generated.h"

UENUM(BlueprintType)
enum class EEHHUDMenuType : uint8 {
    None,
    Technology,
    Construction,
    Inventory,
    Guidebook,
    Map,
    Resources,
    Astronauts,
    Vehicles,
    PhotoMode,
    _MAX UMETA(Hidden),
};

