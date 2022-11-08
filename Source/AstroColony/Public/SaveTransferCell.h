#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGridItem.h"
#include "UObject/NoExportTypes.h"
#include "SaveTransferCell.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FSaveTransferCell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInsideBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveGridItem> Items;
    
    FSaveTransferCell();
};

