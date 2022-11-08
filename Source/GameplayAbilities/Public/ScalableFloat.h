#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "DataRegistryType.h"
#include "ScalableFloat.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FScalableFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistryType RegistryType;
    
    FScalableFloat();
};

