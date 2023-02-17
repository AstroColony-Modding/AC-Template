#pragma once
#include "CoreMinimal.h"
#include "ReportingReason.h"
#include "ReportingReasonsResponse.generated.h"

USTRUCT(BlueprintType)
struct FReportingReasonsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReportingReason> Data;
    
    CFCORE_API FReportingReasonsResponse();
};

