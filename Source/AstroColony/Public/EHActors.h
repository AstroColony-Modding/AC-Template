#pragma once
#include "CoreMinimal.h"
#include "EHActors.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    FEHActors();
};

