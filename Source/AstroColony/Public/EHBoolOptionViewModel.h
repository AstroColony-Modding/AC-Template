#pragma once
#include "CoreMinimal.h"
#include "EHOptionViewModel.h"
#include "EHBoolOptionViewModel.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API UEHBoolOptionViewModel : public UEHOptionViewModel {
    GENERATED_BODY()
public:
    UEHBoolOptionViewModel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBindableChanged(bool NewValue);
    
};

