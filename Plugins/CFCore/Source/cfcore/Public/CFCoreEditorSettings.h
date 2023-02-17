#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EModsDirectoryMode.h"
#include "CFCoreEditorSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class CFCORE_API UCFCoreEditorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString defaultLanguage;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 gameId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString apiKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxConcurrentInstallations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString modsDirectory;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModsDirectoryMode modsDirectoryMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userDataDirectory;
    
    UCFCoreEditorSettings();
};

