#pragma once
#include "CoreMinimal.h"
#include "TGIWidgetValidation.h"
#include "Blueprint/UserWidget.h"
#include "TGUserWidget.generated.h"

class UTGUIConfigCustom;
class UTGUIConfigMain;
class UTGViewModel;
class UTGWidgetAnimationsManager;

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGUserWidget : public UUserWidget, public ITGIWidgetValidation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotifyFocusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTGUIConfigMain* BCUIConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UTGUIConfigCustom*> BCUIConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTGWidgetAnimationsManager* AnimationsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGViewModel* ViewModel;
    
public:
    UTGUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContextChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTGWidgetAnimationsManager* GetWidgetAnimationsManager() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

