#pragma once
#include "CoreMinimal.h"
#include "ECFCoreModsSearchSortField.generated.h"

UENUM(BlueprintType)
enum class ECFCoreModsSearchSortField : uint8 {
    None,
    Featured,
    Popularity,
    LastUpdated,
    Name,
    Author,
    TotalDownloads,
    Category,
    GameVersion,
};

