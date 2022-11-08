#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "TGUIScene.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGUIScene : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseWideScreenContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventFromLosingFocusOnViewportClick;
    
    UTGUIScene();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterEvent();
    
};

