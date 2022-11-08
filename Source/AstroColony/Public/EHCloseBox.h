#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHCloseBox.generated.h"

class UTGWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHCloseBox : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidget* CloseBox;
    
public:
    UEHCloseBox();
private:
    UFUNCTION(BlueprintCallable)
    void HandleCloseClicked();
    
};

