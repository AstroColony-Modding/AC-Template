#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DataRegistryIdFormat.generated.h"

USTRUCT(BlueprintType)
struct FDataRegistryIdFormat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BaseGameplayTag;
    
    DATAREGISTRY_API FDataRegistryIdFormat();
};

