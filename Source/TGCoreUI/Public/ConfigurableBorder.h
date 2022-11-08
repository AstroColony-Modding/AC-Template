#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ConfigurableBorder.generated.h"

USTRUCT(BlueprintType)
struct FConfigurableBorder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BrushColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DesiredSizeScale;
    
    TGCOREUI_API FConfigurableBorder();
};

