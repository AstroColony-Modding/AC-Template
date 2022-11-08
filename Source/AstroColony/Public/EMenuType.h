#pragma once
#include "CoreMinimal.h"
#include "EMenuType.generated.h"

UENUM(BlueprintType)
enum class EMenuType : uint8 {
    None,
    MainMenu,
    StartGame,
    NewGame,
    StartDemo,
    StartBeta,
    ContinueGame,
    Multiplayer,
    MapEditor,
    Settings,
    Extras,
    Exit,
    SaveGame,
    LoadGame,
    Mods,
    Campaign,
    Sandbox,
    Survival,
    Ex_Credits,
    Ex_Help,
    Pm_Resume,
    Pm_BackToMainMenu,
    Pm_RestartLevel,
};

