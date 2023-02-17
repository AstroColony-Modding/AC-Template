#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "PredictionKey.h"
#include "ServerAbilityRPCBatch.generated.h"

USTRUCT(BlueprintType)
struct FServerAbilityRPCBatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AbilitySpecHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityTargetDataHandle TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InputPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool Started;
    
    GAMEPLAYABILITIES_API FServerAbilityRPCBatch();
};

