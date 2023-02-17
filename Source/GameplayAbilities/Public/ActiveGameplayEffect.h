#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayEffectSpec.h"
#include "PredictionKey.h"
#include "ActiveGameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FActiveGameplayEffect : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpec Spec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartServerWorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float CachedStartServerWorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float StartWorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bIsInhibited;
    
    FActiveGameplayEffect();
};

