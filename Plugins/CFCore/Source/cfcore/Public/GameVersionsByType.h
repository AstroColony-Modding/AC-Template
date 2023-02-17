#pragma once
#include "CoreMinimal.h"
#include "GameVersionsByType.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FGameVersionsByType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> versions;
    
    FGameVersionsByType();
};

