#pragma once
#include "CoreMinimal.h"
#include "TGUILayer.h"
#include "Templates/SubclassOf.h"
#include "EHToastContainerWidget.generated.h"

class UCanvasPanel;
class UEHToastContainerViewModel;
class UEHToastViewModel;
class UEHToastWidget;
class UTGUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEHToastContainerWidget : public UTGUILayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUserWidget> ToastImageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUserWidget> ToastTechnologyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenToasts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumSimultaneousToasts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* WidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHToastContainerViewModel* ToastContainerViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHToastWidget*> ActiveToastWidgets;
    
public:
    UEHToastContainerWidget();
    UFUNCTION(BlueprintCallable)
    void ShowNextToast(UEHToastViewModel* ToastViewModel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToastFinished(UEHToastWidget* FinishedWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnToastDismissed(UEHToastWidget* FinishedWidget);
    
};

