#pragma once
#include "CoreMinimal.h"
#include "TextBindable.h"
#include "EHViewModel.h"
#include "EHSaveLoadListViewModel.generated.h"

class UEHSaveLoadOptionViewModel;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScenarioDetailsUpdated);

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSaveLoadListViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHSaveLoadOptionViewModel*> SaveLoadOptionViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSaveLoadOptionViewModel* CurrentOption;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScenarioDetailsUpdated OnScenarioDetailsUpdated;
    
    UEHSaveLoadListViewModel();
};

