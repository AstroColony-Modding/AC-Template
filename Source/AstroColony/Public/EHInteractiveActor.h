#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHInteractableChildActorInterface.h"
#include "EHInteractiveActor.generated.h"

class UEHInteractableObject;

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API AEHInteractiveActor : public AActor, public IEHInteractableChildActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UEHInteractableObject* InteractableObject;
    
public:
    AEHInteractiveActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInteractableObject* GetInteractableObject();
    
    
    // Fix for true pure virtual functions not being implemented
};

