#pragma once
#include "CoreMinimal.h"
#include "ESettingsControllerActions.generated.h"

UENUM(BlueprintType)
enum class ESettingsControllerActions : uint8 {
    None,
    ThrowGrenade,
    XboxHome,
    UseRightWeapon,
    Reload,
    ChangeWeapon,
    Melee,
    Flashlight,
    Jump,
    GameMenu,
    Zoom,
    SwitchGrenades,
    Crouch,
    ToggleVisuals_MultiplayerScoreboard,
    NightVision,
    UseEquipment,
    UseLeftWeapon,
    ThrowGrenadeUseLeftWeapon,
    ZoomUseLeftWeapon,
    MeleeUseLeftWeapon,
    ReloadSwapLeftWeapon,
    ReloadLeftWeapon,
    ActionReloadLeftWeapon,
    ActionReloadRightWeapon,
    VISRMode,
    VISRDatabase,
    Sprint,
    UseArmorAbility,
    LookUp,
    LookDown,
    StrafeLeftRight,
    MoveForward,
    MoveBackward,
    RotateLeftRight,
};

