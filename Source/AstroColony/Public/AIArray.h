#pragma once
#include "CoreMinimal.h"
#include "AIArray.generated.h"

class UEHAIObject;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FAIArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHAIObject*> AIObjects;
    
    FAIArray();
};

