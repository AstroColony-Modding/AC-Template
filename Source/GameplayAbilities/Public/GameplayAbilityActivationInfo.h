#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityActivationMode.h"
#include "PredictionKey.h"
#include "GameplayAbilityActivationInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityActivationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGameplayAbilityActivationMode::Type> ActivationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeEndedByOtherInstance: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKeyWhenActivated;
    
public:
    FGameplayAbilityActivationInfo();
};

