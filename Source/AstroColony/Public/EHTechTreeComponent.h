#pragma once
#include "CoreMinimal.h"
#include "TechTreeManager.h"
#include "EHSaveGameInterface.h"
#include "EHTechTreeComponent.generated.h"

class UEHTechnologyAsset;
class UEHAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHTechTreeComponent : public UTechTreeManager, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTechnologyChanged, UEHTechnologyAsset*, PreviousTechnology, UEHTechnologyAsset*, CurrentTechnology);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTechGameplayUnlocked);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechnologyChanged OnTechnologyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnRecipeUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnItemUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnProfessionUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnPlantUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnAnimalUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnGlobalPointUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnGameplayEffectUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnCustomUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTechNotifications;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechGameplayUnlocked OnTechnologyPointsDockChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AreTechPointsDocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentlyReasearchTechnology, meta=(AllowPrivateAccess=true))
    UEHTechnologyAsset* CurrentlyReasearchTechnology;
    
public:
    UEHTechTreeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTechPointsDocked(const bool ArePointsDocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TechnologyUnlockFeedback(UEHAsset* Item, bool UnlockSuccess);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TryUnlockTechnology();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeResearchedTechnology(UEHTechnologyAsset* TechnologyToResearch);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentlyReasearchTechnology(UEHTechnologyAsset* LastReasearchTechnology);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsUnlockedWithFeedback(UEHAsset* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStructureUnlocked(UEHAsset* Structure);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecipeUnlocked(const FName Name, const bool IsUnlockedByDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProfessionUnlocked(UEHAsset* Technology);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlantUnlocked(UEHAsset* Plant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemUnlocked(UEHAsset* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGlobalPointUnlocked(UEHAsset* GlobalPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayEffectUnlocked(UEHAsset* GameplayEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimalUnlocked(UEHAsset* Animal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHTechnologyAsset* GetTechnologyToUnlock(UEHAsset* Asset);
    
    
    // Fix for true pure virtual functions not being implemented
};

