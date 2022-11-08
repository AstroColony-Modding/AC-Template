#pragma once
#include "CoreMinimal.h"
#include "EHDeviceItem.h"
#include "Engine/DataTable.h"
#include "EGlobalPointType.h"
#include "EHProductionDeviceItem.generated.h"

class UEHItem;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHProductionDeviceItem : public UEHDeviceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanProduceItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> Recipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultSelectedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> DefaultSelectedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> DefaultRecipesAutoDeactivateCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasDynamicRecipes;
    
    UEHProductionDeviceItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHItem*> GetOutputItemsFromRecipes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<EGlobalPointType> GetOutputGeneratedPointsFromRecipes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHItem*> GetInputItemsFromRecipes();
    
};

