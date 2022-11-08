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
    
    UPROPERTY(EditAnywhere)
    uint8 MaxWorkersAssigned;
    
    UPROPERTY(EditAnywhere)
    uint8 MaxResources;
    
    UPROPERTY(EditAnywhere)
    uint8 CurrentWorkersAssigned;
    
    FEHRequestedResource();
};

