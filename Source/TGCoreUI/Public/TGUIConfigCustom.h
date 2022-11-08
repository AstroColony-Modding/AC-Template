#pragma once
#include "CoreMinimal.h"
#include "TGUIConfig.h"
#include "TGUIConfigCustom.generated.h"

UCLASS(Abstract, Blueprintable)
class TGCOREUI_API UTGUIConfigCustom : public UTGUIConfig {
    GENERATED_BODY()
public:
    UTGUIConfigCustom();
};

