#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityInputBinds.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityBindInfo.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FGameplayAbilityBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayAbilityInputBinds::Type> Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> GameplayAbilityClass;
    
    GAMEPLAYABILITIES_API FGameplayAbilityBindInfo();
};

