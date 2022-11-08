#pragma once
#include "CoreMinimal.h"
#include "EHWallItem.h"
#include "UObject/NoExportTypes.h"
#include "EHInteractableWallItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHInteractableWallItem : public UEHWallItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector WallSize;
    
    UEHInteractableWallItem();
};

