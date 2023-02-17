#pragma once
#include "CoreMinimal.h"
#include "TGILoadingScreen.h"
#include "TGUISubsystem.h"
#include "TGUILoadingScreenManager.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGUILoadingScreenManager : public UTGUISubsystem, public ITGILoadingScreen {
    GENERATED_BODY()
public:
    UTGUILoadingScreenManager();
    
    // Fix for true pure virtual functions not being implemented
};

