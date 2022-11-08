#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHGamepadPreviewFrontWidget.generated.h"

class UEHSettingsGamepadPreviewFrontViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHGamepadPreviewFrontWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsGamepadPreviewFrontViewModel* SettingsGamepadPreviewFrontViewModel;
    
public:
    UEHGamepadPreviewFrontWidget();
};

