#pragma once
#include "CoreMinimal.h"
#include "EHCraftingObject.h"
#include "EHRecipe.h"
#include "EHRecyclingMachine.generated.h"

class UEHItemsContainer;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHRecyclingMachine : public UEHCraftingObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_GarbageContainer, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* GarbageContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecyclingProcessingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEHRecipe DynamicRecyclingRecipe;
    
public:
    UEHRecyclingMachine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GarbageContainer();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemChanged();
    
};

