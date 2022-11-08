#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayCueTag.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueTag;
    
    GAMEPLAYABILITIES_API FGameplayCueTag();
};

