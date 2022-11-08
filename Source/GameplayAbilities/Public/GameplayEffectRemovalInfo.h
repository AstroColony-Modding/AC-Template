#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayEffectRemovalInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectRemovalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrematureRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectContextHandle EffectContext;
    
    GAMEPLAYABILITIES_API FGameplayEffectRemovalInfo();
};

