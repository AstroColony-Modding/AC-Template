#pragma once
#include "CoreMinimal.h"
#include "EHItemInstance.h"
#include "EHItemsContainer.h"
#include "EHGlobalPointInstance.h"
#include "EAIProfession.h"
#include "EHProductionProgress.h"
#include "EHRecipe.h"
#include "EHProductionObject.generated.h"

class UEHAIObject;
class UEHItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHProductionObject : public UEHItemsContainer {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectedRecipesChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemProduced, FEHItemInstance, ProducedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlobalPointProduced, FEHGlobalPointInstance, ProducedGlobalPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCraftingStateChanged, FName, RecipeName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAutoDeactivateCountsChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssignedAIWorkersChanged, uint8, AICount);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowProductionItemsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIProfession RequiredJobProfession;
    
    UPROPERTY(EditAnywhere)
    uint8 MaximumSpecialistsNumber;
    
    UPROPERTY(EditAnywhere)
    uint8 DedicatedSpecialistsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHAIObject*> AssignedWorkplaceAIs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedRecipesChanged OnSelectedRecipesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAutoDeactivateCountsChanged OnAutoDeactivateCountsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemProduced OnItemProduced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalPointProduced OnGlobalPointProduced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAssignedAIWorkersChanged OnAssignedAIWorkersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAssignedAIWorkersChanged DedicatedSpecialistsNumberChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraftingStateChanged OnCraftingStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHAIObject*> AIsInside;
    
    UPROPERTY(EditAnywhere)
    uint8 AIInsideCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEHProductionProgress> RecipesProgresses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEHRecipe> SelectedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> RecipesAutoDeactivateCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UEHItem*> ProducedItemsCached;
    
public:
    UEHProductionObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesRecipesForProduction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkplaceForAI();
    
    UFUNCTION(BlueprintCallable)
    bool IncreaseDedicatedWorkplaceAI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProducingRecipe();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLoadGameFinished(bool IsLoadedFromSavegame);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialistRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEHRecipe> GetRecipes();
    
    UFUNCTION(BlueprintCallable)
    FEHProductionProgress GetRecipeProgress(const FName& RecipeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProductionRatio(bool RequireSpecialist);
    
    UFUNCTION(BlueprintCallable)
    bool DecreaseDedicatedWorkplaceAI();
    
};

