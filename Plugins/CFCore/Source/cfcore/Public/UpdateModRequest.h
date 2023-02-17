#pragma once
#include "CoreMinimal.h"
#include "CreateModRequest.h"
#include "UpdateModRequest.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FUpdateModRequest : public FCreateModRequest {
    GENERATED_BODY()
public:
    FUpdateModRequest();
};

