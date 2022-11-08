#pragma once
#include "CoreMinimal.h"
#include "MissionData.h"
#include "MOMission.h"
#include "MissionSavegameData.generated.h"

USTRUCT(BlueprintType)
struct FMissionSavegameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMissionData> MissionDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> MissionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMOMission> OngoingMissionsTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMOMission> SucessfulMissionsTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMOMission> FailureMissionsTemplates;
    
    MISSIONOBJECTIVES_API FMissionSavegameData();
};

