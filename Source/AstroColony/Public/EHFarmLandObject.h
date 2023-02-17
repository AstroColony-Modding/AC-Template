#pragma once
#include "CoreMinimal.h"
#include "EHInteractableServiceObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHFarmLandObject.generated.h"

class UEHAIFarmerObject;
class UEHFarmLandObject;
class UParticleSystem;

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
    UEHAIFarmerObject* AssignedFarmer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHFarmLandObject*> SiblingsFarmLands;
    
public:
    UEHFarmLandObject();
    
    // Fix for true pure virtual functions not being implemented
};

