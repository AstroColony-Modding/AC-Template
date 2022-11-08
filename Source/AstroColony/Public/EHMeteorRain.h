#pragma once
#include "CoreMinimal.h"
#include "EHCelestialBodyActor.h"
#include "EHMeteorRain.generated.h"

class UProjectileMovementComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHMeteorRain : public AEHCelestialBodyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    AEHMeteorRain();
};

