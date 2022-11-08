#pragma once
#include "CoreMinimal.h"
#include "EHDeviceObject.h"
#include "EHLightObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHLightObject : public UEHDeviceObject {
    GENERATED_BODY()
public:
    UEHLightObject();
};

