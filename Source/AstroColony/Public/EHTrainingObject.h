#pragma once
#include "CoreMinimal.h"
#include "EHInteractableServiceObject.h"
#include "EHProgress.h"
#include "EHTrainingObject.generated.h"

class UEHAIItem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTrainedChanged);

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHTrainingObject : public UEHInteractableServiceObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrainedChanged OnTrainedProductionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrainedChanged OnTrainedCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHProgress progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProductionAITime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHAIItem* AIToSpawn;
    
    UEHTrainingObject();
};

