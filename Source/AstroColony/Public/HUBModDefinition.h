#pragma once
#include "CoreMinimal.h"
#include "UGCPackage.h"
#include "HUBModDefinition.generated.h"

class UACModConfig;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FHUBModDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCPackage UGCPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PakFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UACModConfig* ACModConfig;
    
    FHUBModDefinition();
};

