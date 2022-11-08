#pragma once
#include "CoreMinimal.h"
#include "BoolBindable.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "EHGammaStepperViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHGammaStepperViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolBindable IsPreviousActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolBindable IsNextActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable GammaValue;
    
    UEHGammaStepperViewModel();
    UFUNCTION(BlueprintCallable)
    void SelectPreviousOption();
    
    UFUNCTION(BlueprintCallable)
    void SelectOption(const int32 OptionID);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextOption();
    
};

