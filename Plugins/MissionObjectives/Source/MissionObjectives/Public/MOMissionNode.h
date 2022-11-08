#pragma once
#include "CoreMinimal.h"
#include "MOTextNode.h"
#include "EMissionState.h"
#include "MOMissionNode.generated.h"

UCLASS(Blueprintable)
class MISSIONOBJECTIVES_API UMOMissionNode : public UMOTextNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionState NodeMissionState;
    
    UMOMissionNode();
};

