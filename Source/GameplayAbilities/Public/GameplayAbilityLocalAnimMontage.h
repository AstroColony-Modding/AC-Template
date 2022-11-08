#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.h"
#include "GameplayAbilityLocalAnimMontage.generated.h"

class UAnimMontage;
class UGameplayAbility;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityLocalAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* AnimatingAbility;
    
    FGameplayAbilityLocalAnimMontage();
};

