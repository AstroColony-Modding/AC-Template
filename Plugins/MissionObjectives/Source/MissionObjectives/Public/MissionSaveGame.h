#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MissionSavegameData.h"
#include "MissionSaveGame.generated.h"

UCLASS(Blueprintable)
class MISSIONOBJECTIVES_API UMissionSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionSavegameData SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionSavegameData> MultiplayerSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousSessionTime;
    
    UMissionSaveGame();
};

