#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor_GroundTrace.h"
#include "GameplayAbilityTargetActor_ActorPlacement.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PlacedActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PlacedActorMaterial;
    
    AGameplayAbilityTargetActor_ActorPlacement();
};

