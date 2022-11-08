#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGameplayAbilityInputBinds.h"
#include "GameplayAbilityBindInfo.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FGameplayAbilityBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGameplayAbilityInputBinds::Type> Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> GameplayAbilityClass;
    
    GAMEPLAYABILITIES_API FGameplayAbilityBindInfo();
};

