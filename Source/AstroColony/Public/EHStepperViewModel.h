#pragma once
#include "CoreMinimal.h"
#include "EHInt32OptionViewModel.h"
#include "BoolBindable.h"
#include "TextBindable.h"
#include "Int32Bindable.h"
#include "EHStepperViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHStepperViewModel : public UEHInt32OptionViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolBindable IsPreviousActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolBindable IsNextActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable SelectedOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Bindable SelectedOptionID;
    
    UEHStepperViewModel();
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOption();
    
    UFUNCTION(BlueprintCallable)
    void SelectOption(const int32 OptionID);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextOption();
    
    UFUNCTION(BlueprintCallable)
    FString GetSelectedOptionName();
    
};

