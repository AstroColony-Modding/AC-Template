#pragma once
#include "CoreMinimal.h"
#include "EHDeviceReplicationData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHDeviceReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ChildActor;
    
    FEHDeviceReplicationData();
};

