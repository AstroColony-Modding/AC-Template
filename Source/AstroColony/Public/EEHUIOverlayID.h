#pragma once
#include "CoreMinimal.h"
#include "EEHUIOverlayID.generated.h"

UENUM(BlueprintType)
enum class EEHUIOverlayID : uint8 {
    None,
    Roster,
    ButtonBar,
    IconBar,
    Toast,
    BuildVersion,
    Nameplate,
    MatchmakingState,
    TextChat,
    Tooltip,
    NotificationDialog,
    ModsHUB,
    _MAX UMETA(Hidden),
};

