#pragma once
#include "CoreMinimal.h"
#include "EHTraceInterface.h"
#include "VoxelCharacter.h"
#include "EHSaveGameInterface.h"
#include "UObject/NoExportTypes.h"
#include "EHCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UEHInventoryComponent;
class AActor;
class AEHGamePlayerController;
class AEHGrid;
class UPrimitiveComponent;
class USceneComponent;
class USphereComponent;
class UEHCharacterMovementComponent;
class AEHMovableSpaceActor;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHCharacter : public AVoxelCharacter, public IEHSaveGameInterface, public IEHTraceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJetpackModeChanged, bool, IsActive);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* TraceCameraPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseVerticalSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseHorizontalSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHGamePlayerController* GamePlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StationaryJetpack, meta=(AllowPrivateAccess=true))
    bool StationaryJetpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Booster, meta=(AllowPrivateAccess=true))
    bool Booster;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJetpackModeChanged OnJetpackModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* BaseComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereGridDetectorComponent;
    
public:
    AEHCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMPTool();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateStationaryJetpack(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateBooster(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ToggleStationaryJetpack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LaunchCharacter_ZOverride(const FVector& LaunchVelocity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LaunchCharacter(const FVector& LaunchVelocity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DetachCharacter();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AttachCharacterToActor(AActor* ParentActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Scan();
    
    UFUNCTION(BlueprintCallable)
    void SC_LaunchCharacter_ZOverride(const FVector& LaunchVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SC_LaunchCharacter(const FVector& LaunchVelocity);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StationaryJetpack();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Booster();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_UpdateHidden(const bool NewHidden);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_DetachActor();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AttachActor(AActor* ParentActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerLeftGrid(AEHGrid* Grid);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerEnteredGrid(AEHGrid* Grid);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetToolRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionDistance(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInteractionDirection(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetInteractionComponent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHCharacterMovementComponent* GetEHMovementComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCharacterVelocity();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableJetpackFloorCheck();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateBaseComponent(AEHMovableSpaceActor* MovableSpaceActor);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
    
    // Fix for true pure virtual functions not being implemented
};

