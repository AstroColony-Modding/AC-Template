#pragma once
#include "CoreMinimal.h"
#include "TGGridWidgetFocus.generated.h"

USTRUCT(BlueprintType)
struct FTGGridWidgetFocus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCustomCellWhenEnteringGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomCellGridIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoveringTimeToFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoveringTimeToActivate;
    
    TGCOREUI_API FTGGridWidgetFocus();
};

