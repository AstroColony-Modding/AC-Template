#pragma once
#include "CoreMinimal.h"
#include "EHCellType.h"
#include "EHGridCellType.generated.h"

class AEHGrid;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHGridCellType : public FEHCellType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHGrid* Grid;
    
    FEHGridCellType();
};

