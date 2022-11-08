#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource_DataTableRules.generated.h"

USTRUCT(BlueprintType)
struct DATAREGISTRY_API FDataRegistrySource_DataTableRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrecacheTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedTableKeepSeconds;
    
    FDataRegistrySource_DataTableRules();
};

