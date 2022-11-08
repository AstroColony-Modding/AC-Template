#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FActiveGameplayEffectHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassedFiltersAndWasExecuted;
    
public:
    FActiveGameplayEffectHandle();
};

