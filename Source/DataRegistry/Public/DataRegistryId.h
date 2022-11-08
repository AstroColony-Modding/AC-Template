#pragma once
#include "CoreMinimal.h"
#include "DataRegistryType.h"
#include "DataRegistryId.generated.h"

USTRUCT(BlueprintType)
struct FDataRegistryId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDataRegistryType RegistryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    DATAREGISTRY_API FDataRegistryId();
};

