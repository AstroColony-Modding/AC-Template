#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldReticleParameters.generated.h"

USTRUCT(BlueprintType)
struct FWorldReticleParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AOEScale;
    
    GAMEPLAYABILITIES_API FWorldReticleParameters();
};

