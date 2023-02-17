#pragma once
#include "CoreMinimal.h"
#include "EHAIObject.h"
#include "EHHarvestPlantTypes.h"
#include "EHAIFarmerObject.generated.h"

class UEHItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAIFarmerObject : public UEHAIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UEHItem* CarriedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 CarriedWater;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EHHarvestPlantTypes CurrentPlant;
    
public:
    UEHAIFarmerObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

