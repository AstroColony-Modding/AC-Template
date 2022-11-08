#pragma once
#include "CoreMinimal.h"
#include "EHElectricityReactor.h"
#include "EHCarbonReactor.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHCarbonReactor : public UEHElectricityReactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SmokeParticle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedParticle;
    
public:
    UEHCarbonReactor();
};

