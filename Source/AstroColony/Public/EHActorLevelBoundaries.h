#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHActorLevelBoundaries.generated.h"

class UEHDeviceItem;

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API AEHActorLevelBoundaries : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHDeviceItem* DeviceItem;
    
    AEHActorLevelBoundaries();
};

