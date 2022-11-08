#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource.h"
#include "DataRegistrySource_DataTableRules.h"
#include "DataRegistrySource_DataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UDataRegistrySource_DataTable : public UDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SourceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistrySource_DataTableRules TableRules;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* CachedTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PreloadTable;
    
public:
    UDataRegistrySource_DataTable();
};

