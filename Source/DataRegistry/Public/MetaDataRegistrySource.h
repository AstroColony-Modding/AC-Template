#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySource.h"
#include "Engine/AssetManagerTypes.h"
#include "EMetaDataRegistrySourceAssetUsage.h"
#include "MetaDataRegistrySource.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DATAREGISTRY_API UMetaDataRegistrySource : public UDataRegistrySource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaDataRegistrySourceAssetUsage AssetUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssetManagerSearchRules SearchRules;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataRegistrySource*> RuntimeChildren;
    
public:
    UMetaDataRegistrySource();
};

