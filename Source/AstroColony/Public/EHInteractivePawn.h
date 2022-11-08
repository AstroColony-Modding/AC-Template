#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EHInteractableChildActorInterface.h"
#include "EHInteractivePawn.generated.h"

class UEHInteractableObject;

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API AEHInteractivePawn : public APawn, public IEHInteractableChildActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PossesedFlags;
    
    AEHInteractivePawn();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInteractableObject* GetInteractableObject();
    
    
    // Fix for true pure virtual functions not being implemented
};

