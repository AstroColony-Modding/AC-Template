#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TGEventListenerComponent.generated.h"

class UTGEventListener;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TGEVENT_API UTGEventListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTGEventListener*> EventListenerArray;
    
public:
    UTGEventListenerComponent();
    UFUNCTION(BlueprintCallable)
    UTGEventListener* Register(TSubclassOf<UTGEventListener> EventListenerClass, const AActor* FilteredActor);
    
    UFUNCTION(BlueprintCallable)
    void ManuallyUnregister(UTGEventListener* EventListener);
    
};

