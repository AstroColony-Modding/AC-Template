#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EHThrusterNetwork.generated.h"

class AEHMovableSpaceActor;
class UEHThrusterObject;
class AEHGrid;
class UEHInteractableObject;
class UEHConnectorStationObject;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHThrusterNetwork : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnThrustChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirectionsAndPowersCalculated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAutopilotStateChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEHMovableSpaceActor> MovableSpaceActorTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDockingDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnThrustChanged OnThrustChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAutopilotStateChanged OnAutopilotStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDirectionsAndPowersCalculated OnDirectionsAndPowersCalculated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHThrusterObject*> ThrustersRot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHThrusterObject*> ThrustersRot90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHThrusterObject*> ThrustersRot180;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHThrusterObject*> ThrustersRot270;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AutopilotActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AEHMovableSpaceActor* MovableSpaceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHGrid* Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector NetworkVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DesiredMovement;
    
public:
    UEHThrusterNetwork();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTotalVelocity();
    
    UFUNCTION(BlueprintCallable)
    void UndockStation(UEHInteractableObject* OriginDockStation);
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void StopDocking();
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredMovement(const FVector& InDesiredMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetAutopilot(const bool IsActive);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_UndockDockingStations(UEHConnectorStationObject* OriginDockingStationObject, UEHConnectorStationObject* TargetDockingStationObject);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SetDesiredMovement(const FVector& InDesiredMovement);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ConnectDockingStations(UEHConnectorStationObject* OriginDockingStationObject, UEHConnectorStationObject* TargetDockingStationObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveToDestination(const FVector& InDestinationPosition, const FVector& DockingStationOffset, const FVector& DestinationDirectionOffset);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMovableSpaceActorLocationChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleMovableDestinationReached(const bool IsMovingToDestination);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHMovableSpaceActor* GetMovableSpaceActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHGrid* GetGrid();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHThrusterObject*> GetAllThrustersRot90();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHThrusterObject*> GetAllThrustersRot270();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHThrusterObject*> GetAllThrustersRot180();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHThrusterObject*> GetAllThrustersRot0();
    
    UFUNCTION(BlueprintCallable)
    void AddVelocity(const FVector VelocityChange);
    
};

