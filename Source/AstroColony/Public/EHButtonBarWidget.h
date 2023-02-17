#pragma once
#include "CoreMinimal.h"
#include "TGUILayer.h"
#include "EButtonBarAction.h"
#include "Templates/SubclassOf.h"
#include "EHButtonBarWidget.generated.h"

class UEHButtonBarEntryWidget;
class UEHButtonBarViewModel;
class UHorizontalBox;
class UTGUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHButtonBarWidget : public UTGUILayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ControllerWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* MKWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUserWidget> ButtonBarControllerEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUserWidget> ButtonBarMKEntryClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHButtonBarViewModel* EHButtonBarViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EButtonBarAction, UEHButtonBarEntryWidget*> ControllerButtonsCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EButtonBarAction, UEHButtonBarEntryWidget*> KeyboardButtonsCached;
    
public:
    UEHButtonBarWidget();
};

