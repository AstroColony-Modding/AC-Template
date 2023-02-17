#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource_DataTableRules.h"
#include "MetaDataRegistrySource.h"
#include "Templates/SubclassOf.h"
#include "MetaDataRegistrySource_DataTable.generated.h"

class UDataRegistrySource_DataTable;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDataRegistrySource_DataTable> CreatedSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistrySource_DataTableRules TableRules;
    
    UMetaDataRegistrySource_DataTable();
};

