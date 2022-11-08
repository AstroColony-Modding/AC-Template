#pragma once
#include "CoreMinimal.h"
#include "EHInt32OptionViewModel.h"
#include "Int32Bindable.h"
#include "EHRadioButtonsViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHRadioButtonsViewModel : public UEHInt32OptionViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Bindable SelectedOptionID;
    
    UEHRadioButtonsViewModel();
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOption();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextOption();
    
};

