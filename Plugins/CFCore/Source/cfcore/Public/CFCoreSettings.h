#pragma once
#include "CoreMinimal.h"
#include "EModsDirectoryMode.h"
#include "CFCoreSettings.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FCFCoreSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString defaultLanguage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 gameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString apiKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxConcurrentInstallations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString modsDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModsDirectoryMode modsDirectoryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userDataDirectory;
    
    FCFCoreSettings();
};

