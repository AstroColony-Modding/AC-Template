#pragma once
#include "CoreMinimal.h"
#include "EHSaveLoadListViewModel.h"
#include "EHScreenViewModel.h"
#include "EHSummaryViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSummaryViewModel : public UEHScreenViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScenarioDetailsUpdated OnScenarioDetailsUpdated;
    
    UEHSummaryViewModel();
};

