#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskDebugMessage.generated.h"

class UGameplayTask;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FAbilityTaskDebugMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask* FromTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FAbilityTaskDebugMessage();
};

