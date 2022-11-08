#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameAssets.h"
#include "ECFCoreStatus.h"
#include "ECFCoreApiStatus.h"
#include "Game.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FGame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString slug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime dateModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameAssets assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreStatus status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreApiStatus apiStatus;
    
    FGame();
};

