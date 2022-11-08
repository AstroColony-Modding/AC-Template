#pragma once
#include "CoreMinimal.h"
#include "EHCelestialBodyActor.h"
#include "UObject/NoExportTypes.h"
#include "EHCometStrike.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHCometStrike : public AEHCelestialBodyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Activated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CometProjectile;
    
    AEHCometStrike();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverCometProjectile(const FVector& CometProjectilePosition);
    
};

