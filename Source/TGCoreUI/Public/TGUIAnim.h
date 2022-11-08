#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TGUIAnim.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGUIAnim : public UObject {
    GENERATED_BODY()
public:
    UTGUIAnim();
    UFUNCTION(BlueprintCallable)
    void Play();
    
};

