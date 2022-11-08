#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TGEventStreamOwner.h"
#include "TGGameState.generated.h"

class UTGEventStreamComponent;
class AActor;

UCLASS(Blueprintable)
class TGCORESESSION_API ATGGameState : public AGameStateBase, public ITGEventStreamOwner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlayerActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTGEventStreamComponent* EventStreamComponent;
    
public:
    ATGGameState();
    
    // Fix for true pure virtual functions not being implemented
};

