#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EHIndicationInterface.h"
#include "EHJobModeType.h"
#include "EHPlayerWorldInteractionInterface.h"
#include "EHSaveGameInterface.h"
#include "EPlayerActionType.h"
#include "EHWorldInteractivePawn.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHWorldInteractivePawn : public APawn, public IEHPlayerWorldInteractionInterface, public IEHSaveGameInterface, public IEHIndicationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InteractionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerActionType, EHJobModeType> ActionTypeJobModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnpossesedFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PossesedFlags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SerializedActorUniqueName;
    
public:
    AEHWorldInteractivePawn();
    
    // Fix for true pure virtual functions not being implemented
};

