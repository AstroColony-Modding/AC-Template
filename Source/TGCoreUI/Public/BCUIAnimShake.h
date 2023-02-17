#pragma once
#include "CoreMinimal.h"
#include "BCShakeAnimationConfig.h"
#include "TGUIAnim.h"
#include "BCUIAnimShake.generated.h"

class UBCUIAnimShake;
class UTGUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UBCUIAnimShake : public UTGUIAnim {
    GENERATED_BODY()
public:
    UBCUIAnimShake();
    UFUNCTION(BlueprintCallable)
    void SetConfig(const FBCShakeAnimationConfig& Config);
    
    UFUNCTION(BlueprintCallable)
    static UBCUIAnimShake* RegisterNewAnimation(UTGUserWidget* Outer, const FBCShakeAnimationConfig& Config);
    
};

