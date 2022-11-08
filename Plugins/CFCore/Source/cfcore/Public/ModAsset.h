#pragma once
#include "CoreMinimal.h"
#include "ModAsset.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FModAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 ID;
    
    UPROPERTY(EditAnywhere)
    int64 modId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString thumbnailUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FModAsset();
};

