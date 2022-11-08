#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EHCharacters.h"
#include "EHGameModeBase.generated.h"

class UEHItem;
class AEHCharacter;
class UEHInteractableObject;

UCLASS(Blueprintable, NonTransient)
class ASTROCOLONY_API AEHGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHInteractableObject*, FEHCharacters> ContainersWatchingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, FEHCharacters> ItemsWatchingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<AEHCharacter*, UEHInteractableObject*> WatchedContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEHCharacter*> AllPlayers;
    
    AEHGameModeBase();
};

