#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "EHParticleSystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UEHParticleSystemComponent();
    UFUNCTION(BlueprintCallable)
    void ForceResetParticle();
    
};

