#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TechTreeManager.generated.h"

class UTechnologyTree;
class UTTTechNode;
class UTechnologySaveGame;
class UTechTreeWidget;
class UTechnologyAsset;
class USaveGame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TECHTREE_API UTechTreeManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTechTreeRecovered, const UTechnologyTree*, TechTree);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTechTreeAssigned, UTechnologyTree*, TechTree);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTechnologyUnlockStateChanged, UTechnologyTree*, TechTree, UTTTechNode*, TechNode, bool, IsUnlocked);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechnologyUnlockStateChanged OnTechnologyUnlockStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechTreeAssigned OnTechTreeAssigned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTechnologySaveGame> SaveGameTemplate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechTreeRecovered OnTechTreeRecovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTechnologyTree* TechnologyTree;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTechTreeWidget* TechTreeWidget;
    
public:
    UTechTreeManager();
    UFUNCTION(BlueprintCallable)
    void UnlockTechnology(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable)
    void SaveTechToObject(const uint8 PlayerNetworkIndex, USaveGame* SaveGameObject);
    
    UFUNCTION(BlueprintCallable)
    void SaveTechStateFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadTechStateFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadTechFromObject(const uint8 PlayerNetworkIndex, USaveGame* SaveGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTechnologyUnlocked(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChildTechnology(UTTTechNode* ParentNode, UTechnologyAsset* ChildNodeTechnology);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedParents(UTechnologyAsset* Technology);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTechnologyStateChanged(UTTTechNode* TechNode, bool IsUnlocked);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechTreeWidget* GetTechTreeWidget();
    
    UFUNCTION(BlueprintCallable)
    USaveGame* GetSavegameTechObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTTTechNode* GetNodeFromTechAsset(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechnologyTree* GetAssignedTechTree();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UnlockTechnology(UTechnologyAsset* Technology);
    
    UFUNCTION(BlueprintCallable)
    void AssignTechTreeWidget(UTechTreeWidget* InTechTreeWidget);
    
    UFUNCTION(BlueprintCallable)
    void AssignTechTree(UTechnologyTree* TechTree);
    
};

