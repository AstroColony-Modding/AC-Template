#pragma once
#include "CoreMinimal.h"
#include "MOTextNode.h"
#include "MOObjectiveNode.generated.h"

class UObjectiveAsset;
class UScriptedAction;

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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 CurrentRepetitionsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RepetitionsCount;
    
public:
    UMOObjectiveNode();
};

