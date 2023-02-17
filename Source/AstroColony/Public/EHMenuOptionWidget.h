#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHMenuOptionWidget.generated.h"

class UEHMenuViewModel;
class UTGWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHMenuOptionWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidget* Interactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHMenuViewModel* MenuViewModel;
    
public:
    UEHMenuOptionWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFocusReceived();
    
    UFUNCTION(BlueprintCallable)
    void HandleClicked();
    
};

