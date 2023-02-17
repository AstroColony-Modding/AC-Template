#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Static.h"
#include "GameplayCueNotify_HitImpact.generated.h"

class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UGameplayCueNotify_HitImpact();
};

