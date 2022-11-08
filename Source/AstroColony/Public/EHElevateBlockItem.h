#pragma once
#include "CoreMinimal.h"
#include "EElevateTypes.h"
#include "EHDeviceItem.h"
#include "EHElevateBlockItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHElevateBlockItem : public UEHDeviceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EElevateTypes ElevateType;
    
    UEHElevateBlockItem();
};

