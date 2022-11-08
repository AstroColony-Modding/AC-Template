#pragma once
#include "CoreMinimal.h"
#include "TGUISubsystem.h"
#include "TGUISceneContextManager.generated.h"

class UTGUISceneContext;

UCLASS(Blueprintable)
class TGCOREUI_API UTGUISceneContextManager : public UTGUISubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTGUISceneContext*> InitialisedContexts;
    
public:
    UTGUISceneContextManager();
};

