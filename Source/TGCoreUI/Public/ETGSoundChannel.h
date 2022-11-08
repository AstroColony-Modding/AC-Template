#pragma once
#include "CoreMinimal.h"
#include "ETGSoundChannel.generated.h"

UENUM(BlueprintType)
enum class ETGSoundChannel : uint8 {
    Master,
    Effects,
    GameMusic,
    MenuMusic,
    UserInterface,
};

