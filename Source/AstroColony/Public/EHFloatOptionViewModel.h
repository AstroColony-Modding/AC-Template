#pragma once
#include "CoreMinimal.h"
#include "EHOptionViewModel.h"
#include "EHFloatOptionViewModel.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API UEHFloatOptionViewModel : public UEHOptionViewModel {
    GENERATED_BODY()
public:
    UEHFloatOptionViewModel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBindableChanged(float NewValue);
    
};

