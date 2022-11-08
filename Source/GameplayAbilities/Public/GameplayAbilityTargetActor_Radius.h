#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor.h"
#include "GameplayAbilityTargetActor_Radius.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    AGameplayAbilityTargetActor_Radius();
};

