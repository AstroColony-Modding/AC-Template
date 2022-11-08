#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHPhotoModeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHPhotoModeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UEHPhotoModeWidget();
    UFUNCTION(BlueprintCallable)
    void TakeScreenshot(const bool ShowUI, const int32 ResolutionID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenshotCaptured(const FString& ScreenshotName);
    
};

