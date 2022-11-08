#pragma once
#include "CoreMinimal.h"
#include "Game.h"
#include "GameResponse.generated.h"

USTRUCT(BlueprintType)
struct FGameResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGame Data;
    
    CFCORE_API FGameResponse();
};

