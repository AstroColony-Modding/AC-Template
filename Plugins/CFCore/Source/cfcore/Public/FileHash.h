#pragma once
#include "CoreMinimal.h"
#include "ECFCoreHashAlgo.h"
#include "FileHash.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FFileHash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreHashAlgo algo;
    
    FFileHash();
};

