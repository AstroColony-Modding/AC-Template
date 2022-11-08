#pragma once
#include "CoreMinimal.h"
#include "EHPreviewISM.h"
#include "EHPreviewISMCell.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHPreviewISMCell : public UEHPreviewISM {
    GENERATED_BODY()
public:
    UEHPreviewISMCell();
};

