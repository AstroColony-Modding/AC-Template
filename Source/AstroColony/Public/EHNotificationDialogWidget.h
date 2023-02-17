#pragma once
#include "CoreMinimal.h"
#include "TGUILayer.h"
#include "EHNotificationDialogWidget.generated.h"

class UEHNotificationDialogViewModel;
class UTGWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHNotificationDialogWidget : public UTGUILayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ExitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHNotificationDialogViewModel* NotificationDialogViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidget* MouseBlocker;
    
public:
    UEHNotificationDialogWidget();
};

