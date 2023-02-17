#pragma once
#include "CoreMinimal.h"
#include "TermsLink.h"
#include "TermsLinks.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FTermsLinks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTermsLink website;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTermsLink Terms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTermsLink privacy;
    
    FTermsLinks();
};

