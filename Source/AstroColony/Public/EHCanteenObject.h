#pragma once
#include "CoreMinimal.h"
#include "EHInteractableServiceContainer.h"
#include "UObject/NoExportTypes.h"
#include "EHCanteenObject.generated.h"

class UEHItem;
class UEHFoodItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHCanteenObject : public UEHInteractableServiceContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> SolidFoodInsideInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> LiquidFoodInsideInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHItem*> RequiredItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHFoodItem*> SolidFoodPreviewItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHFoodItem*> LiquidFoodPreviewItems;
    
public:
    UEHCanteenObject();
};

