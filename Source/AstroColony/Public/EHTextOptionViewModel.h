#pragma once
#include "CoreMinimal.h"
#include "EHOptionViewModel.h"
#include "EHTextOptionViewModel.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API UEHTextOptionViewModel : public UEHOptionViewModel {
    GENERATED_BODY()
public:
    UEHTextOptionViewModel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBindableChanged(FText NewValue);
    
};

