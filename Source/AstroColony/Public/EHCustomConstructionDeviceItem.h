#pragma once
#include "CoreMinimal.h"
#include "EHDeviceItem.h"
#include "UObject/NoExportTypes.h"
#include "EHCustomConstructionDeviceItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHCustomConstructionDeviceItem : public UEHDeviceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CCShouldCheckSweepResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CCBoxHalfExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ConstructOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCCameraDistance;
    
    UEHCustomConstructionDeviceItem();
};

