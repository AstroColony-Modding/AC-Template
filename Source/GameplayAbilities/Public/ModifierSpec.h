#pragma once
#include "CoreMinimal.h"
#include "ModifierSpec.generated.h"

USTRUCT(BlueprintType)
struct FModifierSpec {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvaluatedMagnitude;
    
public:
    GAMEPLAYABILITIES_API FModifierSpec();
};

