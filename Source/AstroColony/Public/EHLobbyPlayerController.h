#pragma once
#include "CoreMinimal.h"
#include "EHPlayerController.h"
#include "EHLobbyPlayerController.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHLobbyPlayerController : public AEHPlayerController {
    GENERATED_BODY()
public:
    AEHLobbyPlayerController();
    UFUNCTION(BlueprintCallable)
    void StartSavegameReplication();
    
    UFUNCTION(BlueprintCallable)
    void LobbyLoadSavegame();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendPackage(const TArray<uint8>& PackageData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifySavegameReplicationStarted(const int32 SavegameSizeIn);
    
};

