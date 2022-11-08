#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource.h"
#include "DataRegistrySource_DataTableRules.h"
#include "DataRegistrySource_CurveTable.generated.h"

class UCurveTable;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UDataRegistrySource_CurveTable : public UDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> SourceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistrySource_DataTableRules TableRules;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveTable* CachedTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* PreloadTable;
    
public:
    UDataRegistrySource_CurveTable();
};

