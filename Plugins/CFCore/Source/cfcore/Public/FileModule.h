#pragma once
#include "CoreMinimal.h"
#include "FileModule.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FFileModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 fingerprint;
    
    FFileModule();
};

