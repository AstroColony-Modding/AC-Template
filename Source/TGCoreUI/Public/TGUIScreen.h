#pragma once
#include "CoreMinimal.h"
#include "TGUIScene.h"
#include "TGUIScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TGCOREUI_API UTGUIScreen : public UTGUIScene {
    GENERATED_BODY()
public:
    UTGUIScreen();
};

