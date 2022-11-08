#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "GameplayCueInterface.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemTestPawn.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable, NotPlaceable)
class GAMEPLAYABILITIES_API AAbilitySystemTestPawn : public ADefaultPawn, public IGameplayCueInterface, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
public:
    AAbilitySystemTestPawn();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
};

