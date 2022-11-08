#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StructureSize.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FStructureSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector StructureSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector StructureSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> IgnoredCoords;
    
    FStructureSize();
};

