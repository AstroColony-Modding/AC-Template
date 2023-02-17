#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIArray.h"
#include "ContainersArray.h"
#include "EAIProfession.h"
#include "EHResourceVeinNetworks.h"
#include "InteractableObjectArray.h"
#include "ResourceAction.h"
#include "ResourceActionArray.h"
#include "Templates/SubclassOf.h"
#include "EHDevicesComponent.generated.h"

class AEHGrid;
class UEHBarrierNetwork;
class UEHCraftingObject;
class UEHDeviceObject;
class UEHElectricNetwork;
class UEHInteractableObject;
class UEHItem;
class UEHItemsContainer;
class UEHProductionObject;
class UEHSignalNetwork;
class UEHWaterNetwork;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHDevicesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNetworkChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDevicesChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UEHProductionObject*> ProductionObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UEHItemsContainer*> StorageObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UEHItemsContainer*> PushObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UEHInteractableObject>, FAIArray> AIObjectsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAIProfession, FAIArray> VacantAISpecialistsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInteractableObjectArray> WorldResourceObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UEHInteractableObject>, FInteractableObjectArray> VacantInteractibleObjectsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UEHInteractableObject>, FInteractableObjectArray> InteractibleObjectsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceAction> ResourceActionsHeap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, FContainersArray> StoredResroucesContainersMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, FContainersArray> ProducedResroucesContainersMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, FContainersArray> RequiredResroucesContainersMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, FResourceActionArray> WaitingRequiredResroucesMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDevicesChanged OnCraftingDevicesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDevicesChanged OnInteractableDevicesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkChanged OnElectricNetworkChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkChanged OnWaterNetworkChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkChanged OnSignalNetworkChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHWaterNetwork*> WaterNetworks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHBarrierNetwork* BarrierNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHCraftingObject*> ElectricDevices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHElectricNetwork*> ElectricNetworks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHDeviceObject*> SignalDevices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHSignalNetwork*> SignalNetworks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, FEHResourceVeinNetworks> ResourceVeinNetworksMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHGrid* Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHCraftingObject*> WaterDevices;
    
public:
    UEHDevicesComponent();
    UFUNCTION(BlueprintCallable)
    void MarkWaterNetworkStateDirty();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLoadGameFinished(bool IsLoadedFromSavegame);
    
    UFUNCTION(BlueprintCallable)
    void HandleContainerItemChange(UEHItem* Item, UEHItemsContainer* ItemsContainer, bool IsAdding);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHInteractableObject*> GetInteractableObjectsWithTag(TSubclassOf<UEHInteractableObject> InteractableClass, const FName InteractableTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHInteractableObject*> GetInteractableObjectsByType(TSubclassOf<UEHInteractableObject> InteractableClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHInteractableObject*> GetInteractableObjectsByItem(UEHItem* Item);
    
};

