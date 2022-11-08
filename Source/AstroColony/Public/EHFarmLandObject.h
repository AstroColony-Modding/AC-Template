#pragma once
#include "CoreMinimal.h"
#include "EHInteractableServiceObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHFarmLandObject.generated.h"

class UParticleSystem;
class UEHAIFarmerObject;
class UEHFarmLandObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHFarmLandObject : public UEHInteractableServiceObject, public IEHMetamorphosisInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> PlantCropsParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> HarvestCropsParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> WaterCropsParticle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHAIFarmerObject* WorkingFarmer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHFarmLandObject*> SiblingsFarmLands;
    
public:
    UEHFarmLandObject();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_FarmerEntered(UEHAIFarmerObject* NewFarmer);
    
    
    // Fix for true pure virtual functions not being implemented
};

