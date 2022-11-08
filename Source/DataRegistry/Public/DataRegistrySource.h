#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DataRegistrySource.generated.h"

class UDataRegistrySource;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew, Within=DataRegistry)
class DATAREGISTRY_API UDataRegistrySource : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDataRegistrySource* ParentSource;
    
public:
    UDataRegistrySource();
};

