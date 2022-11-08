#pragma once
#include "CoreMinimal.h"
#include "MinimalReplicationTagCountMap.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FMinimalReplicationTagCountMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* Owner;
    
    FMinimalReplicationTagCountMap();
};

