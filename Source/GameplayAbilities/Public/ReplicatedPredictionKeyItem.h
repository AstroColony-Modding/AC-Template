#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PredictionKey.h"
#include "ReplicatedPredictionKeyItem.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    GAMEPLAYABILITIES_API FReplicatedPredictionKeyItem();
};

