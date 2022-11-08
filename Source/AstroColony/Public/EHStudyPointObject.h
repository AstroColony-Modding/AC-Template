#pragma once
#include "CoreMinimal.h"
#include "EHTrainingObject.h"
#include "EHStudyPointObject.generated.h"

class UEHAIHumanTrainee;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHStudyPointObject : public UEHTrainingObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHAIHumanTrainee* HumanTrainee;
    
public:
    UEHStudyPointObject();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SpecialistTrained();
    
};

