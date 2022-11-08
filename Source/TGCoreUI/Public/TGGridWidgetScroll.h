#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "TGGridWidgetScroll.generated.h"

USTRUCT(BlueprintType)
struct FTGGridWidgetScroll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsScrollSupported;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOrientation> ScrollOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldScrollAnimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScrollVisibleRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScrollVisibleRowsBuffer;
    
    TGCOREUI_API FTGGridWidgetScroll();
};

