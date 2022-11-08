#pragma once
#include "CoreMinimal.h"
#include "EEHBackgroundType.h"
#include "TGUILayer.h"
#include "EHBackgroundWidget.generated.h"

class UEHBackgroundViewModel;
class UObject;
class UMediaSource;
class UMediaPlayer;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBackgroundWidget : public UTGUILayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHBackgroundViewModel* BackgroundViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHBackgroundType, UMediaSource*> BackgroundVideos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* BinkMediaPlayer;
    
    UEHBackgroundWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowVideo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMediaOpened();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideVideo();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMediaOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void HandleMediaFailed(const FString& FailedUrl);
    
    UFUNCTION(BlueprintCallable)
    void HandleBinkMediaOpened(const FString& OpenedUrl);
    
};

