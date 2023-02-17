#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "EHMPScenarioParams.h"
#include "EHLobbyGameState.generated.h"

class UEHTcpSocketConnection;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHLobbyGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyStateChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHTcpSocketConnection* TcpSocketConnection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyStateChanged MSScenarioParamsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyStateChanged MaxLobbyPlayersChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxLobbyPlayers, meta=(AllowPrivateAccess=true))
    int32 MaxLobbyPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MPScenarioParams, meta=(AllowPrivateAccess=true))
    FEHMPScenarioParams MPScenarioParams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 connectionIdGameServer;
    
public:
    AEHLobbyGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Send(const TArray<uint8>& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MPScenarioParams();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxLobbyPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnMessageReceived(int32 ConId, TArray<uint8>& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnDisconnected(int32 ConId);
    
    UFUNCTION(BlueprintCallable)
    void OnConnected(int32 ConnectionId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientSavegameLoaded(int32 SavegameSize);
    
};

