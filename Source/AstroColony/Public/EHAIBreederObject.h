#pragma once
#include "CoreMinimal.h"
#include "EHAIObject.h"
#include "EHBreedAnimalTypes.h"
#include "EHItemInstance.h"
#include "EHAIBreederObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAIBreederObject : public UEHAIObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FEHItemInstance CarriedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 CarriedWater;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EHBreedAnimalTypes CurrentAnimal;
    
public:
    UEHAIBreederObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

