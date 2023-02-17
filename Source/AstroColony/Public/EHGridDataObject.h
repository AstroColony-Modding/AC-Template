#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHDataObject.h"
#include "SaveGridItem.h"
#include "SaveGridItemContainer.h"
#include "SaveTransferCell.h"
#include "EHGridDataObject.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHGridDataObject : public UEHDataObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveGridItemContainer> GridItemsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveGridItemContainer> InsideAIsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveGridItem> WaterNetworks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FSaveTransferCell> TransferedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ThrusterNetworkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> PlanetoidSurfacePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> PlanetoidAerialPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> PlanetoidWalkableRamps0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> PlanetoidWalkableRamps90;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> PlanetoidWalkableRamps180;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> PlanetoidWalkableRamps270;
    
    UEHGridDataObject();
};

