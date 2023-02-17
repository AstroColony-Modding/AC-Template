#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "GameplayAbilityTargetActor.h"
#include "GameplayAbilityTargetActor_Trace.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class GAMEPLAYABILITIES_API AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName TraceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceAffectsAimPitch;
    
    AGameplayAbilityTargetActor_Trace();
};

