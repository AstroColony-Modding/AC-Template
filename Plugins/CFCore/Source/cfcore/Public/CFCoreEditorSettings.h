#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CFCoreEditorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class CFCORE_API UCFCoreEditorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int64 gameId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString apiKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxConcurrentInstallations;
    
    UCFCoreEditorSettings();
};

