#pragma once
#include "CoreMinimal.h"
#include "EHOptionViewModel.h"
#include "EHStringOptionViewModel.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API UEHStringOptionViewModel : public UEHOptionViewModel {
    GENERATED_BODY()
public:
    UEHStringOptionViewModel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBindableChanged(const FString& NewValue);
    
};

