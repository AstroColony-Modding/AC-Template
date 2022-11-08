#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityWorldReticle.h"
#include "GameplayAbilityWorldReticle_ActorVisualization.generated.h"

class UActorComponent;
class UCapsuleComponent;

UCLASS(Blueprintable)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> VisualizationComponents;
    
    AGameplayAbilityWorldReticle_ActorVisualization();
};

