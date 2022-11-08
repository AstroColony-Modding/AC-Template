#pragma once
#include "CoreMinimal.h"
#include "HistoryBuffer.h"
#include "ReplayData.generated.h"

USTRUCT(BlueprintType)
struct FReplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHistoryBuffer Correction;
    
    BLUEMANVEHICLEPHYSICS_API FReplayData();
};

