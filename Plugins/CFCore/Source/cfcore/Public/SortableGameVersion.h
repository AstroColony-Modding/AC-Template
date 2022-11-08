#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SortableGameVersion.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FSortableGameVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameVersionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameVersionPadded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime gameVersionReleaseDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gameVersionTypeId;
    
    FSortableGameVersion();
};

