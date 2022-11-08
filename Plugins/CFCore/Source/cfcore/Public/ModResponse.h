#pragma once
#include "CoreMinimal.h"
#include "CFCoreMod.h"
#include "ModResponse.generated.h"

USTRUCT(BlueprintType)
struct FModResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCFCoreMod Data;
    
    CFCORE_API FModResponse();
};

