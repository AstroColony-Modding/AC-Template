#pragma once
#include "CoreMinimal.h"
#include "ECFCoreModLoaderType.generated.h"

UENUM(BlueprintType)
enum class ECFCoreModLoaderType : uint8 {
    Any,
    Forge,
    Cauldron,
    LiteLoader,
    Fabric,
};

