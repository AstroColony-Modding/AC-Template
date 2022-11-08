#include "EHLobbyGameState.h"
#include "Net/UnrealNetwork.h"

void AEHLobbyGameState::Send(const TArray<uint8>& Data) {
}

void AEHLobbyGameState::OnRep_MPScenarioParams() {
}

void AEHLobbyGameState::OnRep_MaxLobbyPlayers() {
}

void AEHLobbyGameState::OnMessageReceived(int32 ConId, TArray<uint8>& Message) {
}

void AEHLobbyGameState::OnDisconnected(int32 ConId) {
}

void AEHLobbyGameState::OnConnected(int32 ConnectionId) {
}


void AEHLobbyGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHLobbyGameState, MaxLobbyPlayers);
    DOREPLIFETIME(AEHLobbyGameState, MPScenarioParams);
}

AEHLobbyGameState::AEHLobbyGameState() {
    this->TcpSocketConnection = NULL;
    this->MaxLobbyPlayers = 0;
    this->connectionIdGameServer = 0;
}

