#pragma once
#include "CoreMinimal.h"
#include "Int32Bindable.h"
#include "TGViewModel.h"
#include "TextBindable.h"
#include "Texture2DBindable.h"
#include "VisibilityBindable.h"
#include "EHSettingsPreviewViewModel.generated.h"

class UEHOptionViewModel;
class UEHSettingsGamepadPreviewFrontViewModel;
class UEHSettingsGamepadPreviewViewModel;
class UEHSettingsOptionViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSettingsPreviewViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSettingsGamepadPreviewViewModel* SettingsGamepadPreviewViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSettingsGamepadPreviewFrontViewModel* SettingsGamepadPreviewFrontViewModel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityBindable ImageVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityBindable PreviewDescriptionVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityBindable TextVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTexture2DBindable PreviewImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable PreviewDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Bindable PreviewSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSettingsOptionViewModel* SettingsOptionViewModel;
    
public:
    UEHSettingsPreviewViewModel();
private:
    UFUNCTION(BlueprintCallable)
    void OnOptionSelectedChanged(UEHOptionViewModel* ViewModel);
    
};

