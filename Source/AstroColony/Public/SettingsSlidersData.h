#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESettingOptionType.h"
#include "ESliderStepType.h"
#include "SettingsSlidersData.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FSettingsSlidersData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingOptionType SettingOptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESliderStepType SliderStepType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadKeyboardStepValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseWidgetStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumFractionalDigits;
    
    FSettingsSlidersData();
};

