#pragma once
#include "CoreMinimal.h"
#include "EHRecipe.h"
#include "EHDeviceObject.h"
#include "EHVisitedByAIInterface.h"
#include "UObject/NoExportTypes.h"
#include "EHItemInstance.h"
#include "EHRequestedResource.h"
#include "EEHSlotDragType.h"
#include "EHItemsContainer.generated.h"

class UEHItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHItemsContainer : public UEHDeviceObject, public IEHVisitedByAIInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTransferedItemsForRecipe, FEHRecipe, Recipe, const int32, Count);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemsPushed, UEHItem*, Item, const FIntVector, PushCoord);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSet, const int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemsDelivered, FEHItemInstance, DeliveredItems);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemsChange);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FEHItemInstance> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPreviewContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRemovable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHSlotDragType SlotDragType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, int32> ItemsLookupCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasInvertedPushDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHRequestedResource> RequestedResources;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsChange OnItemsChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsChange OnRequestedResourcesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSet OnItemSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsPushed OnItemsPushedOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsPushed OnItemsPushedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsDelivered OnItemsDelivered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransferedItemsForRecipe OnTransferedItemsForRecipe;
    
    UEHItemsContainer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ResetRequestedItems();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRequestedItem(UEHItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void PickItem(UEHItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void NotifyItemsChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_TakeSingleItem(const UEHItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void MoveSingleItemToInventory(UEHItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void InvertPushDefinitions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPushDefinitions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItem(const FEHItemInstance& ItemInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTakingItems(const TArray<FEHItemInstance>& ItemInstances);
    
    UFUNCTION(BlueprintCallable)
    bool AddRequestedItem(UEHItem* Item, const uint8 MaxWorkersAssigned, const uint8 MaxResources);
    
    UFUNCTION(BlueprintCallable)
    void AddItems(const TArray<FEHItemInstance>& ItemInstences);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(const FEHItemInstance& ItemInstance);
    
    
    // Fix for true pure virtual functions not being implemented
};

