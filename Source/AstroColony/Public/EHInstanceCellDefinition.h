#pragma once
#include "CoreMinimal.h"
#include "EInstanceCellType.h"
#include "UObject/NoExportTypes.h"
#include "EEHInstanceRotation.h"
#include "EHInstanceCellDefinition.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHInstanceCellDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInstanceCellType InstanceCellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector CellCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHInstanceRotation Rotation;
    
    FEHInstanceCellDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FEHInstanceCellDefinition) { return 0; }