#pragma once
#include "CoreMinimal.h"
#include "DataRegistryType.generated.h"

USTRUCT(BlueprintType)
struct FDataRegistryType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Name;
    
public:
    DATAREGISTRY_API FDataRegistryType();
};

