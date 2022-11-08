#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEHInstanceRotation.h"
#include "UObject/NoExportTypes.h"
#include "EHCellType.generated.h"

class UEHItem;
class UEHInteractableObject;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHCellType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHInteractableObject* InteractableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector CellCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHInstanceRotation CellRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InstanceLocation;
    
    UPROPERTY(EditAnywhere)
    uint8 CellState;
    
    FEHCellType();
};

FORCEINLINE uint32 GetTypeHash(const FEHCellType) { return 0; }