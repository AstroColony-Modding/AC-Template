#pragma once
#include "CoreMinimal.h"
#include "MOMission.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct FMOMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMission* Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionID;
    
    MISSIONOBJECTIVES_API FMOMission();
};

