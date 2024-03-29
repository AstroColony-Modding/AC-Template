#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHFloorItem.h"
#include "EHInteractableFloorItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHInteractableFloorItem : public UEHFloorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector FloorSize;
    
    UEHInteractableFloorItem();
};

