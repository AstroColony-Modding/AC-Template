#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayEffectModifiedAttribute.h"
#include "GameplayEffectSpecForRPC.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectSpecForRPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayEffect* Def;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectContextHandle EffectContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AggregatedSourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AggregatedTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityLevel;
    
    FGameplayEffectSpecForRPC();
};

