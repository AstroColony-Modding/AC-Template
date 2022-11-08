#pragma once
#include "CoreMinimal.h"
#include "VehicleArray.generated.h"

class UEHAIObject;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FVehicleArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHAIObject*> AIObjects;
    
    FVehicleArray();
};

