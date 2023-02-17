#pragma once
#include "CoreMinimal.h"
#include "TGUISubsystem.h"
#include "TGUIFocusManager.generated.h"

class UTGUIScene;
class UTGUserWidget;

UCLASS(Blueprintable)
class TGCOREUI_API UTGUIFocusManager : public UTGUISubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGUserWidget* CurrentlyFocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGUIScene* CurrentlyFocusedScene;
    
public:
    UTGUIFocusManager();
};

