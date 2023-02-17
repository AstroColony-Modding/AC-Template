#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TermsContent.h"
#include "Terms.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FTerms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime updateDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTermsContent content;
    
    FTerms();
};

