#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHGamepadPreviewTopWidget.generated.h"

class UEHSettingsGamepadPreviewViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHGamepadPreviewTopWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsGamepadPreviewViewModel* SettingsGamepadPreviewViewModel;
    
public:
    UEHGamepadPreviewTopWidget();
};

