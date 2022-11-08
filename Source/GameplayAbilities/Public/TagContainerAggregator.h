#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagContainerAggregator.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FTagContainerAggregator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CapturedActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CapturedSpecTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ScopedTags;
    
public:
    FTagContainerAggregator();
};

