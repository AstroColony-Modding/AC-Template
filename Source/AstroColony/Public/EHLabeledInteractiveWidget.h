#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHLabeledInteractiveWidget.generated.h"

class UEHLabeledInteractiveWidgetViewModel;
class UTGConfigurableTextBlock;
class UTGInputActionWidget;
class UTGViewModel;
class UTGWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHLabeledInteractiveWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnClickEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultLabelText;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickEvent OnClickEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHLabeledInteractiveWidgetViewModel* DefaultLabeledWidgetViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* ConfigurableLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGInputActionWidget* InputPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidget* InteractiveArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHLabeledInteractiveWidgetViewModel* LabeledWidgetViewModel;
    
public:
    UEHLabeledInteractiveWidget();
    UFUNCTION(BlueprintCallable)
    void SetBPDataContext(UTGViewModel* InViewModel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleClicked();
    
};

