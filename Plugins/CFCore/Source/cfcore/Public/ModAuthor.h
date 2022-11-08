#pragma once
#include "CoreMinimal.h"
#include "ModAuthor.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FModAuthor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FModAuthor();
};

