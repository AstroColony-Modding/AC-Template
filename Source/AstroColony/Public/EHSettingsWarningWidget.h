#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHSettingsWarningWidget.generated.h"

class UEHSettingsWarningViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSettingsWarningWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsWarningViewModel* SettingsWarningViewModel;
    
public:
    UEHSettingsWarningWidget();
};

