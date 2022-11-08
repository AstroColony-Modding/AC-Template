#pragma once
#include "CoreMinimal.h"
#include "EHPlayerController.h"
#include "EHSaveGameInterface.h"
#include "EEHDebugMode.h"
#include "UObject/NoExportTypes.h"
#include "EHGamePlayerController.generated.h"

class UEHScenarioComponent;
class UEHBarrierNetwork;
class APawn;
class AEHGrid;
class AEHCharacter;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHGamePlayerController : public AEHPlayerController, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUniverseChanged, uint8, PreviousIndex, uint8, NewIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPauseStateChanged, bool, IsPaused);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOxygenReffiled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModeChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCharacterRefillingOxygenChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoosterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRefillingOxygen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Oxygen;
    
    UPROPERTY(EditAnywhere)
    uint8 UniverseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCharacterFarAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasOxygen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LosingHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUpdateWorldOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPlayerVisitedPlanet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHDebugMode DebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDebugTravelUniverse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModeChanged OnDebugModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModeChanged OnControlModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModeChanged OnCharacterPossedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModeChanged OnCharacterFarAwayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterRefillingOxygenChanged OnCharacterRefillingOxygenChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUniverseChanged OnUniverseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPauseStateChanged OnPauseStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOxygenReffiled OnOxygenReffiled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOxygenReffiled OnBarrierOxygenReffiled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOxygenReffiled HasOxygenChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOxygenReffiled LosingHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHScenarioComponent* ScenarioManager;
    
    AEHGamePlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerCinematicSequence();
    
    UFUNCTION(BlueprintCallable)
    void ToggleControlMode(const bool ControlModeEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ToggleCharacterRefillingOxygen(const bool IsBarrierRefillingOxygen, UEHBarrierNetwork* BarrierNetwork);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShowActors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetVirtualCamera(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePaused(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMode(bool IsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PossesPawn(APawn* InPawn, bool ShouldAttachCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PossesCharacterAtLocation(const FVector& Location, const bool ShouldTeleportPlayer, bool ShouldDetachCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PossesCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGirdDebugActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterPossesed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HideActors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePossessImpossible();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerEnteredGrid(AEHGrid* Grid);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePlayerAction(FName PlayerActionName);
    
    UFUNCTION(BlueprintCallable)
    void GoToPreviousUniverse();
    
    UFUNCTION(BlueprintCallable)
    void GoToNextUniverse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUniverseSignature();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHCharacter* GetEHCharacter();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyPossessImpossible();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_BarrierOxygenRefilled();
    
    
    // Fix for true pure virtual functions not being implemented
};

