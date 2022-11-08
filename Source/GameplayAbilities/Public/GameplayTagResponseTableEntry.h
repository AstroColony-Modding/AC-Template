#pragma once
#include "CoreMinimal.h"
#include "GameplayTagReponsePair.h"
#include "GameplayTagResponseTableEntry.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagResponseTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagReponsePair Positive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagReponsePair Negative;
    
    GAMEPLAYABILITIES_API FGameplayTagResponseTableEntry();
};

