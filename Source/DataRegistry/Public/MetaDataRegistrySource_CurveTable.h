#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MetaDataRegistrySource.h"
#include "DataRegistrySource_DataTableRules.h"
#include "MetaDataRegistrySource_CurveTable.generated.h"

class UDataRegistrySource_CurveTable;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDataRegistrySource_CurveTable> CreatedSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistrySource_DataTableRules TableRules;
    
    UMetaDataRegistrySource_CurveTable();
};

