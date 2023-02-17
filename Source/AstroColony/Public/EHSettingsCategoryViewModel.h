#pragma once
#include "CoreMinimal.h"
#include "TextBindable.h"
#include "EHViewModel.h"
#include "EHSettingsCategoryViewModel.generated.h"

class UEHSettingsOptionViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSettingsCategoryViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHSettingsOptionViewModel*> CategoryViewModels;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsOptionViewModel* CurrentOption;
    
public:
    UEHSettingsCategoryViewModel();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSettingChanged(UEHSettingsOptionViewModel* ViewModel);
    
    UFUNCTION(BlueprintCallable)
    void HandleInputBindingChanged(UEHSettingsOptionViewModel* ViewModel);
    
};

