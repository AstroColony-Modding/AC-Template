#pragma once
#include "CoreMinimal.h"
#include "InputInfo.generated.h"

USTRUCT(BlueprintType)
struct FInputInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoredSteeringInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoredThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoredBrakingInput;
    
    BLUEMANVEHICLEPHYSICS_API FInputInfo();
};

