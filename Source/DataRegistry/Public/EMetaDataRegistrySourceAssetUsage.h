#pragma once
#include "CoreMinimal.h"
#include "EMetaDataRegistrySourceAssetUsage.generated.h"

UENUM(BlueprintType)
enum class EMetaDataRegistrySourceAssetUsage : uint8 {
    NoAssets,
    SearchAssets,
    RegisterAssets,
    SearchAndRegisterAssets,
};

