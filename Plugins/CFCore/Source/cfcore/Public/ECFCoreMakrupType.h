#pragma once
#include "CoreMinimal.h"
#include "ECFCoreMakrupType.generated.h"

UENUM(BlueprintType)
enum class ECFCoreMakrupType : uint8 {
    PlaceHolderDoNotUse,
    WysiwygHtml,
    PlainText,
    BBCode,
    Creole,
    Markdown,
    RawHtml,
    StandardBBCode = 0x8,
    RawCSS,
};

