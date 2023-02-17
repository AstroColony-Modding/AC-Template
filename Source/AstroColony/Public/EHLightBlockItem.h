#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHDeviceItem.h"
#include "Templates/SubclassOf.h"
#include "EHLightBlockItem.generated.h"

class ULightComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHLightBlockItem : public UEHDeviceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULightComponent> LightTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LightOffset;
    
    UEHLightBlockItem();
};

