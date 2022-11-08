#pragma once
#include "CoreMinimal.h"
#include "MissionSaveGame.h"
#include "UnlockedTechnologiesData.h"
#include "TechnologySaveGame.generated.h"

class UTechnologyAsset;

UCLASS(Blueprintable)
class TECHTREE_API UTechnologySaveGame : public UMissionSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTechnologyAsset*> UnlockedTechnologies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockedTechnologiesData> MultiplayerUnlockedTechnologies;
    
    UTechnologySaveGame();
};

