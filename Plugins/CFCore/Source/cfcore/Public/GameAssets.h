#pragma once
#include "CoreMinimal.h"
#include "GameAssets.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FGameAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString iconUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tileUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString coverUrl;
    
    FGameAssets();
};

