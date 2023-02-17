#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEHInstanceRotation.h"
#include "EHGeneratedReactiveMesh.h"
#include "EInstanceCellType.h"
#include "EPushDirection.h"
#include "Templates/SubclassOf.h"
#include "ContainerPushDefinition.generated.h"

class UEHConveyorObject;
class UEHItem;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FContainerPushDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Coord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHInstanceRotation GateRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsidePushOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushDirection PushDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHItem*> RestrictedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInstanceCellType RestrictedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHConveyorObject> ConveyorPushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHGeneratedReactiveMesh GateMesh;
    
    FContainerPushDefinition();
};

