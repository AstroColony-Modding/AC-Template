#pragma once
#include "CoreMinimal.h"
#include "ResourceAction.h"
#include "ResourceActionArray.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FResourceActionArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceAction> Containers;
    
    FResourceActionArray();
};

