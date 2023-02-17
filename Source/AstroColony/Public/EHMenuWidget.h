#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHBaseButtonProperties.h"
#include "Templates/SubclassOf.h"
#include "EHMenuWidget.generated.h"

class UEHBaseButtonWidget;
class UEHMenuViewModel;
class USoundBase;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHMenuWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHBaseButtonWidget> BaseButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHBaseButtonProperties BaseButtonProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalMenuOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> MenuEnterAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> MenuBackAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHMenuViewModel* MenuViewModel;
    
    UEHMenuWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnter();
    
    UFUNCTION(BlueprintCallable)
    void Back();
    
};

