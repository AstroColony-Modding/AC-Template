#pragma once
#include "CoreMinimal.h"
#include "MinimalGameplayCueReplicationProxy.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FMinimalGameplayCueReplicationProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* Owner;
    
public:
    FMinimalGameplayCueReplicationProxy();
};

