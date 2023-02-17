#pragma once
#include "CoreMinimal.h"
#include "BoolBindable.h"
#include "EHBoolOptionViewModel.h"
#include "EHToggleViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHToggleViewModel : public UEHBoolOptionViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolBindable Toggled;
    
    UEHToggleViewModel();
    UFUNCTION(BlueprintCallable)
    void Toggle();
    
    UFUNCTION(BlueprintCallable)
    void SetToggle(const bool IsToggled);
    
};

