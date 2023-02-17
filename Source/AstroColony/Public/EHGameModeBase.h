#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EHCharacters.h"
#include "EHPendingPlayerContainer.h"
#include "EHGameModeBase.generated.h"

class AEHCharacter;
class AEHPlayerController;
class UEHInteractableObject;
class UEHItem;

UCLASS(Blueprintable, NonTransient)
class ASTROCOLONY_API AEHGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHInteractableObject*, FEHCharacters> ContainersWatchingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, FEHCharacters> ItemsWatchingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<AEHCharacter*, UEHInteractableObject*> WatchedContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEHCharacter*> AllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHPendingPlayerContainer> PendingPlayerContainerUnregisters;
    
    AEHGameModeBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerLeftGame(AEHPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void InitCF();
    
};

