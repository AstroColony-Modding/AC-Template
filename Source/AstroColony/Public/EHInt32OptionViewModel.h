#pragma once
#include "CoreMinimal.h"
#include "EHOptionViewModel.h"
#include "EHInt32OptionViewModel.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API UEHInt32OptionViewModel : public UEHOptionViewModel {
    GENERATED_BODY()
public:
    UEHInt32OptionViewModel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBindableChanged(int32 NewValue);
    
};

