#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHAnimatedEllipsisTextWidget.generated.h"

class UEHAnimatedEllipsisTextWidgetViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHAnimatedEllipsisTextWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHAnimatedEllipsisTextWidgetViewModel* TextWidgetViewModel;
    
public:
    UEHAnimatedEllipsisTextWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableEllipsis(bool AreEllipsisEnabled);
    
};

