#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "PredictionKey.h"
#include "GameplayCueParameters.h"
#include "ActiveGameplayCue.generated.h"

USTRUCT(BlueprintType)
struct FActiveGameplayCue : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bPredictivelyRemoved;
    
    GAMEPLAYABILITIES_API FActiveGameplayCue();
};

