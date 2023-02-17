#pragma once
#include "CoreMinimal.h"
#include "ECFCoreChangelogMarkupType.generated.h"

UENUM(BlueprintType)
enum class ECFCoreChangelogMarkupType : uint8 {
    PlaceHolderDoNotUse,
    Text,
    HTML,
    Markdown,
};

