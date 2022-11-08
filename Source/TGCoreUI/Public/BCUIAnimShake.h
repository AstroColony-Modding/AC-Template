#pragma once
#include "CoreMinimal.h"
#include "TGUIAnim.h"
#include "BCShakeAnimationConfig.h"
#include "BCUIAnimShake.generated.h"

class UTGUserWidget;
class UBCUIAnimShake;

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

