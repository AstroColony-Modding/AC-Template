#pragma once
#include "CoreMinimal.h"
#include "EEHPreviewPlayerActions.generated.h"

UENUM(BlueprintType)
enum class EEHPreviewPlayerActions : uint8 {
    None,
    Interact,
    Open,
    Select = 0x4,
    Inspect = 0x8,
    Extract = 0x10,
    Enter = 0x20,
    Leave = 0x40,
    Cancel = 0x80,
    Remove = 0x81,//0x100,
    RemoveSelected = 0x82, //0x200,
    RotateRight = 0x83, //0x400,
    RotateLeft = 0x84, //0x800,
    AddVoxel = 0x85, //0x1000,
    Upgrade = 0x86, //0x2000,
    Jump = 0x87, //0x4000,
    Crouch = 0x88, //0x8000,
    Turbo = 0x89, //0x10000,
    NextVariant = 0x90, //0x20000,
    PreviousVariant = 0x91, //0x40000,
};

