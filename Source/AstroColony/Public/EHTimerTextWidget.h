#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHTimerTextWidget.generated.h"

class UTGConfigurableTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHTimerTextWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* TimerText;
    
public:
    UEHTimerTextWidget();
};

