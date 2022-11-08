#pragma once
#include "CoreMinimal.h"
#include "MOMissionsManager.h"
#include "EEHScenarioFailureReason.h"
#include "EHSaveGameInterface.h"
#include "EHMissionsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHMissionsComponent : public UMOMissionsManager, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    UEHMissionsComponent();
    UFUNCTION(BlueprintCallable)
    void FailCurrentScenario(const EEHScenarioFailureReason ScenarioFailureReason);
    
    UFUNCTION(BlueprintCallable)
    void CompleteCurrentScenario();
    
    
    // Fix for true pure virtual functions not being implemented
};

