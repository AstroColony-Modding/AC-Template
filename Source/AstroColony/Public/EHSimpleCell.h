#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEHInstanceRotation.h"
#include "EHSimpleCell.generated.h"

class UEHItem;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHSimpleCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector CellCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHInstanceRotation CellRotation;
    
    FEHSimpleCell();
};

