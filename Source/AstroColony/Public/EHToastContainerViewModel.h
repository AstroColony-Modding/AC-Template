#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "EEHToastNature.h"
#include "EHToastContainerViewModel.generated.h"

class UEHToastViewModel;
class UTexture2D;
class UEHTechnologyAsset;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHToastContainerViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHToastViewModel*> QueuedToastViewModels;
    
public:
    UEHToastContainerViewModel();
    UFUNCTION(BlueprintCallable)
    void QueueTechnologyToast(UEHTechnologyAsset* TechnologyAsset, const float ToastDuration);
    
    UFUNCTION(BlueprintCallable)
    void QueueImageToast(const FText& InToastTitle, const FText& InToastDescription, UTexture2D* InIcon, const EEHToastNature Nature, const float ToastDuration);
    
};

