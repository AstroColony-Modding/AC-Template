#pragma once
#include "CoreMinimal.h"
#include "EAIProfession.h"
#include "EHTrainingObject.h"
#include "EHSchoolObject.generated.h"

class UEHAIHumanObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAwaitingSpecialistTrainingsChange);

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSchoolObject : public UEHTrainingObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAwaitingSpecialistTrainingsChange OnAwaitingSpecialistTrainingsChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIProfession> AwaitingSpecialistTrainings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIProfession OngoingSpecialistTraining;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHAIHumanObject* StudyingHuman;
    
public:
    UEHSchoolObject();
};

