#pragma once
#include "CoreMinimal.h"
#include "ReportModRequestDto.generated.h"

USTRUCT(BlueprintType)
struct FReportModRequestDto {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 reportReasonId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString reportText;
    
    CFCORE_API FReportModRequestDto();
};

