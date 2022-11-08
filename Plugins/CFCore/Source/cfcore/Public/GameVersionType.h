#pragma once
#include "CoreMinimal.h"
#include "GameVersionType.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FGameVersionType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 ID;
    
    UPROPERTY(EditAnywhere)
    int64 gameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString slug;
    
    FGameVersionType();
};

