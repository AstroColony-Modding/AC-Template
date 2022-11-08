#pragma once
#include "CoreMinimal.h"
#include "EHBreedAnimalTypes.h"
#include "EHAIObject.h"
#include "EHItemInstance.h"
#include "EHAIBreederObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAIBreederObject : public UEHAIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FEHItemInstance CarriedItem;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 CarriedWater;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EHBreedAnimalTypes CurrentAnimal;
    
public:
    UEHAIBreederObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

