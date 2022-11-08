#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGameplayAbilityTriggerSource.h"
#include "AbilityTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FAbilityTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TriggerTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGameplayAbilityTriggerSource::Type> TriggerSource;
    
    GAMEPLAYABILITIES_API FAbilityTriggerData();
};

