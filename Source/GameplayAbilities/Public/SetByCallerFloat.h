#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SetByCallerFloat.generated.h"

USTRUCT(BlueprintType)
struct FSetByCallerFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DataTag;
    
    GAMEPLAYABILITIES_API FSetByCallerFloat();
};

