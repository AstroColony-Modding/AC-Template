#pragma once
#include "CoreMinimal.h"
#include "NodeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FNodeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NodeName;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> NodeData;
    
    MISSIONOBJECTIVES_API FNodeSaveData();
};

