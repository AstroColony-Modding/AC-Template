#pragma once
#include "CoreMinimal.h"
#include "EHAIHumanObject.h"
#include "EAIProfession.h"
#include "EHAIHumanTrainee.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAIHumanTrainee : public UEHAIHumanObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIProfession TrainSpecialization;
    
    UEHAIHumanTrainee();
};

