#pragma once
#include "CoreMinimal.h"
#include "EHInteractableServiceObject.h"
#include "EHHibernationChamberObject.generated.h"

class UEHAIHumanObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHHibernationChamberObject : public UEHInteractableServiceObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BedRestoreSleepRatio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHAIHumanObject* SleepingHuman;
    
public:
    UEHHibernationChamberObject();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SleepRestored();
    
};

