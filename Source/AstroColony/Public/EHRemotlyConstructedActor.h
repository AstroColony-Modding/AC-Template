#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHIndicationInterface.h"
#include "EHRemoteConstructionInterface.h"
#include "EHRemoteEnergyInterface.h"
#include "EHSaveGameInterface.h"
#include "EHWorldInteractiveActor.h"
#include "EHRemotlyConstructedActor.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHRemotlyConstructedActor : public AEHWorldInteractiveActor, public IEHSaveGameInterface, public IEHIndicationInterface, public IEHRemoteConstructionInterface, public IEHRemoteEnergyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletedExpeditionsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentlyConstructedPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> ConstructionTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsConstructionDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPowerActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ModifiedByPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SerializedActorUniqueName;
    
public:
    AEHRemotlyConstructedActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPowerActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartConstructionCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextPartConstructionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionCanceled();
    
    
    // Fix for true pure virtual functions not being implemented
};

