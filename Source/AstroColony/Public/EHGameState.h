#pragma once
#include "CoreMinimal.h"
#include "EGlobalPointType.h"
#include "TGGameState.h"
#include "EHSaveGameInterface.h"
#include "EHGlobalPointInstance.h"
#include "EHGameState.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHGameState : public ATGGameState, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTechnologyChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSciencePointsUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSciencePointsUpdated OnSciencePointsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumberOfReplicatedLoadActors;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechnologyChanged OnTechnologyChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GlobalPoints, meta=(AllowPrivateAccess=true))
    TArray<int32> GlobalPoints;
    
public:
    AEHGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GlobalPoints();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointByType(const EGlobalPointType GlobalPointType);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalPoints(const TArray<FEHGlobalPointInstance>& GlobalPointInstances);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalPoint(const FEHGlobalPointInstance& GlobalPointInstance);
    
    
    // Fix for true pure virtual functions not being implemented
};

