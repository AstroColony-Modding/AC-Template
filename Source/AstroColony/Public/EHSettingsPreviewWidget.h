#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHSettingsPreviewWidget.generated.h"

class UEHGamepadPreviewFrontWidget;
class UEHGamepadPreviewTopWidget;
class UEHSettingsPreviewViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSettingsPreviewWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHGamepadPreviewTopWidget* PreviewGamepadTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHGamepadPreviewFrontWidget* PreviewGamepadFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsPreviewViewModel* SettingsPreviewViewModel;
    
public:
    UEHSettingsPreviewWidget();
};

