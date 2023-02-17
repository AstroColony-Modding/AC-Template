#pragma once
#include "CoreMinimal.h"
#include "EHRequestedResource.generated.h"

class UEHItem;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHRequestedResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxWorkersAssigned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentWorkersAssigned;
    
    FEHRequestedResource();
};

