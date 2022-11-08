#pragma once
#include "CoreMinimal.h"
#include "TGCameraTransition.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTGCameraTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TransitionCurve;
    
    TGCOREINTERFACETYPES_API FTGCameraTransition();
};

