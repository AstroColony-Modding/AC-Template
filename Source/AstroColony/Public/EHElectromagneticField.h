#pragma once
#include "CoreMinimal.h"
#include "EHCelestialBodyActor.h"
#include "EHElectromagneticField.generated.h"

class UProjectileMovementComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHElectromagneticField : public AEHCelestialBodyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovementComponent;
    
    AEHElectromagneticField();
};

