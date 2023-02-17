#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.generated.h"

class UPackageMap;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FPredictionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UPackageMap* PredictiveConnection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Current;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bIsStale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsServerInitiated;
    
    FPredictionKey();
};

