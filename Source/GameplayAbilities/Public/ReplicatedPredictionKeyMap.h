#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedPredictionKeyItem.h"
#include "ReplicatedPredictionKeyMap.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedPredictionKeyMap : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedPredictionKeyItem> PredictionKeys;
    
    GAMEPLAYABILITIES_API FReplicatedPredictionKeyMap();
};

