#pragma once
#include "CoreMinimal.h"
#include "EHInteractableServiceObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHBarnLandObject.generated.h"

class UEHAIBreederObject;
class UEHBarnLandObject;
class UParticleSystem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBarnLandObject : public UEHInteractableServiceObject, public IEHMetamorphosisInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> PlantAnimalsParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> HarvestAnimalsParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> FeedingAnimalsParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> WaterAnimalsParticle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHAIBreederObject* AssignedBreeder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHAIBreederObject* WorkingBreeder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHBarnLandObject*> SiblingsBarnLands;
    
public:
    UEHBarnLandObject();
    
    // Fix for true pure virtual functions not being implemented
};

