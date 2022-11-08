#pragma once
#include "CoreMinimal.h"
#include "ECFCoreHashAlgo.generated.h"

UENUM(BlueprintType)
enum class ECFCoreHashAlgo : uint8 {
    None,
    Sha1,
    Md5,
};

