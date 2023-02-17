#pragma once
#include "CoreMinimal.h"
#include "FloatBindable.h"
#include "TextBindable.h"
#include "EHFloatOptionViewModel.h"
#include "SettingsSlidersData.h"
#include "EHSliderViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSliderViewModel : public UEHFloatOptionViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatBindable SliderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable TextValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSliderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSliderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingsSlidersData SliderConfig;
    
    UEHSliderViewModel();
    UFUNCTION(BlueprintCallable)
    void SetValue(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void ChangeValue(const float Change);
    
};

