#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHToastWidget.generated.h"

class UWidgetAnimation;
class UEHToastViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHToastWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SlideDownAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHToastViewModel* ToastViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationEndStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAnimationStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenEachSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastAnimationPosition;
    
public:
    UEHToastWidget();
    UFUNCTION(BlueprintCallable)
    void PlayNextAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnToastDismissed();
    
};

