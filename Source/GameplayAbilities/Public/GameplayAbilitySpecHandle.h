#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilitySpecHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    GAMEPLAYABILITIES_API FGameplayAbilitySpecHandle();
};

