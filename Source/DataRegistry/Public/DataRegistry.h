#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DataRegistryIdFormat.h"
#include "DataRegistryCachePolicy.h"
#include "DataRegistry.generated.h"

class UScriptStruct;
class UDataRegistrySource;

UCLASS(Blueprintable)
class DATAREGISTRY_API UDataRegistry : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegistryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistryIdFormat IdFormat;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* ItemStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDataRegistrySource*> DataSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDataRegistrySource*> RuntimeSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistryCachePolicy DefaultCachePolicy;
    
public:
    UDataRegistry();
};

