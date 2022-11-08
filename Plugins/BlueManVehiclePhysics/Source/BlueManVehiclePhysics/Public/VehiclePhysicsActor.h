#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EMovementReplicationMethod.h"
#include "InputInfo.h"
#include "VehiclePhysicsActor.generated.h"

class ULandVehicle_EngineComponent;
class UWheelManager_Component;
class UPrimitiveComponent;
class UClientSidePrediction_Component;
class ULandVehicle_DragComponent;

UCLASS(Blueprintable)
class BLUEMANVEHICLEPHYSICS_API AVehiclePhysicsActor : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputNetUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerThrottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ServerHandbrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerSteering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    ULandVehicle_EngineComponent* ServerEngineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UWheelManager_Component* ServerWheelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandVehicle_EngineComponent* EngineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementReplicationMethod MovementReplicationMethod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClientSidePrediction_Component* StoredPredictionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandVehicle_DragComponent* StoredDragComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWheelManager_Component* StoredWheelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandVehicle_EngineComponent* StoredEngineComponent;
    
public:
    AVehiclePhysicsActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UpdateComponents(ULandVehicle_EngineComponent* Engine, UWheelManager_Component* Manager);
    
    UFUNCTION(BlueprintCallable)
    void SetSteering(float Steering);
    
    UFUNCTION(BlueprintCallable)
    void SetHandbrake(bool Handbrake);
    
    UFUNCTION(BlueprintCallable)
    void SetEngineThrottle(float ThrottleInput);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendMovementDataToServer(FInputInfo Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SendMovementDataToAll(FInputInfo Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ReplicateThrottleToServer(float ThrottleToReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ReplicateSteeringToServer(float SteeringToReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ReplicateHandbrakeToServer(bool HandbrakeToReplicate);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAllSystems();
    
};

