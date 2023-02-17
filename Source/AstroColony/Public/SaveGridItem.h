#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BinaryDataContainer.h"
#include "EEHInstanceRotation.h"
#include "SaveGridItem.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FSaveGridItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector ItemCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHInstanceRotation Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> InteractableObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBinaryDataContainer> AssociatedObjectsData;
    
    FSaveGridItem();
};

