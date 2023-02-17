#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHInteractableServiceObject.h"
#include "EHEatStationObject.generated.h"

class UEHAIHumanObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHEatStationObject : public UEHInteractableServiceObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InsideFoodTransform;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHAIHumanObject* EatingHuman;
    
public:
    UEHEatStationObject();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_HungerRestored();
    
};

