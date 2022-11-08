#pragma once
#include "CoreMinimal.h"
#include "MOTextNode.h"
#include "MOObjectiveNode.generated.h"

class UScriptedAction;
class UObjectiveAsset;

UCLASS(Blueprintable)
class MISSIONOBJECTIVES_API UMOObjectiveNode : public UMOTextNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectiveAsset* ObjectiveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInObjectiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCompletedObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowObjectivePrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UScriptedAction*> ObjectiveDone_Actions;
    
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 CurrentRepetitionsCount;
    
    UPROPERTY(EditAnywhere)
    uint8 RepetitionsCount;
    
public:
    UMOObjectiveNode();
};

