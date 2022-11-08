#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMOScriptedTriggerReason.h"
#include "ScriptedAction.generated.h"

class APlayerController;
class UMOBaseNode;
class UMission;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class MISSIONOBJECTIVES_API UScriptedAction : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlayerController> PlayerControllerRef;
    
public:
    UScriptedAction();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteAction(APlayerController* PlayerController, UMOBaseNode* TriggeredNode, const EMOScriptedTriggerReason TriggerReason, UMission* Mission);
    
};

