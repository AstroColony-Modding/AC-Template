#pragma once
#include "CoreMinimal.h"
#include "EHCollectiveConstructionType.generated.h"

UENUM(BlueprintType)
enum class EHCollectiveConstructionType : uint8 {
    TwoDim_Full,
    TwoDim_Horizontal,
    TwoDim_Vertical,
    OneDim_Full,
    OneDim_Horizontal,
    OneDim_Vertical,
    Diagonal_Full,
    Diagonal_Horizontal,
    Diagonal_Vertical,
    CustomConstruction,
};

