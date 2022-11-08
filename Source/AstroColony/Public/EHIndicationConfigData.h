#pragma once
#include "CoreMinimal.h"
#include "EEHWidgetIndicatorType.h"
#include "UObject/NoExportTypes.h"
#include "EHIndicationConfigData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHIndicationConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHWidgetIndicatorType WidgetIndicatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldShowOffScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldHideCloseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDistance;
    
    FEHIndicationConfigData();
};

