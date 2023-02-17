#pragma once
#include "CoreMinimal.h"
#include "CellTransformation.h"
#include "EEHMetamorphosisType.h"
#include "EHDeviceItem.h"
#include "EHMetamorphosisDeviceItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHMetamorphosisDeviceItem : public UEHDeviceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCellTransformation> CellTransformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHMetamorphosisType MetamorphosisType;
    
    UEHMetamorphosisDeviceItem();
};

