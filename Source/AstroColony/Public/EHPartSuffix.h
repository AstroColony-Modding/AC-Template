#pragma once
#include "CoreMinimal.h"
#include "EHPartSuffix.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHPartSuffix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MirrorLeftRightID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MirrorRearFrontID;
    
    FEHPartSuffix();
};

