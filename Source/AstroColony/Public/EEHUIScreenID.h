#pragma once
#include "CoreMinimal.h"
#include "EEHUIScreenID.generated.h"

UENUM(BlueprintType)
enum class EEHUIScreenID : uint8 {
    None,
    MainMenu,
    StartGame,
    Campaign,
    Sandbox,
    Survival,
    Settings,
    Booting,
    Pause,
    PauseMinimal,
    PauseMultiplayer,
    Save,
    Load,
    Mods,
    Summary,
    Demo,
    Beta,
    NewGame,
    Multiplayer,
    HostGame,
};

