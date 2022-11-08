#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "DataRegistrySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Game)
class DATAREGISTRY_API UDataRegistrySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectoryPath> DirectoriesToScan;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeAllLoadedRegistries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMissingCookedAssetRegistryData;
    
    UDataRegistrySettings();
};

