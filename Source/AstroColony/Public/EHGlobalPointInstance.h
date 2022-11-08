#pragma once
#include "CoreMinimal.h"
#include "EGlobalPointType.h"
#include "EHGlobalPointInstance.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHGlobalPointInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalPointType PointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FEHGlobalPointInstance();
};

