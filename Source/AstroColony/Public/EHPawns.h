#pragma once
#include "CoreMinimal.h"
#include "EHPawns.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHPawns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> Pawns;
    
    FEHPawns();
};

