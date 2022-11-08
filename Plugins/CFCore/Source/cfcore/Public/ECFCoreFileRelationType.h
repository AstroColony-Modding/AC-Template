#pragma once
#include "CoreMinimal.h"
#include "ECFCoreFileRelationType.generated.h"

UENUM(BlueprintType)
enum class ECFCoreFileRelationType : uint8 {
    None,
    EmbeddedLibrary,
    OptionalDependency,
    RequiredDependency,
    Tool,
    Incompatible,
    Include,
};

