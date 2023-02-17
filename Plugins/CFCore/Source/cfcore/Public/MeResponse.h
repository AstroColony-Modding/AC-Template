#pragma once
#include "CoreMinimal.h"
#include "Me.h"
#include "MeResponse.generated.h"

USTRUCT(BlueprintType)
struct FMeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMe Data;
    
    CFCORE_API FMeResponse();
};

