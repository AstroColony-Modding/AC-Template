#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHJobModeType.h"
#include "EHPlayerWorldInteractionInterface.h"
#include "EPlayerActionType.h"
#include "EHWorldInteractiveActor.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHWorldInteractiveActor : public AActor, public IEHPlayerWorldInteractionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWorldInteractiveInfoChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldInteractiveInfoChanged OnWorldInteractiveInfoChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InteractionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerActionType, EHJobModeType> ActionTypeJobModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionsFlags;
    
    AEHWorldInteractiveActor();
    UFUNCTION(BlueprintCallable)
    void NotifyInfoChanged();
    
    
    // Fix for true pure virtual functions not being implemented
};

