#pragma once
#include "CoreMinimal.h"
#include "TextBindable.h"
#include "EHViewModel.h"
#include "ESettingPreviewType.h"
#include "ESettingWidgetType.h"
#include "EHSettingsOptionViewModel.generated.h"

class UEHOptionViewModel;
class UTexture2D;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSettingsOptionViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingPreviewType PreviewType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHOptionViewModel* OptionViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> PreviewImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PreviewDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultTooltipText;
    
    UEHSettingsOptionViewModel();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOptionChanged(UEHOptionViewModel* ViewModel);
    
};

