#pragma once
#include "CoreMinimal.h"
#include "ETGUISubsystem.generated.h"

UENUM(BlueprintType)
enum class ETGUISubsystem : uint8 {
    Screen,
    Overlay,
    Popup,
    UISceneContext,
    LoadingScreen,
    Audio,
    Narration,
    Focus,
    Achievements,
};

