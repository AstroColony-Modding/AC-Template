#pragma once
#include "CoreMinimal.h"
#include "IntVector16.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FIntVector16 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Z;
    
    FIntVector16();
};

