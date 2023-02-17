#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMissionState.h"
#include "Mission.generated.h"

class UEdGraph;
class UMOBaseNode;
class UMOObjectiveNode;
class UMOTextNode;
class UMission;
class UReferencedMissionObject;
class UTexture2D;

UCLASS(Blueprintable)
class MISSIONOBJECTIVES_API UMission : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAssetNameAsMissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionCongratulateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MissionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChangeLastActiveReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReferencedMissionObject* ReferencedMissionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionState MissionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMOTextNode* MissionObjectivesRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEdGraph* UpdateGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMOObjectiveNode*> RegisteredObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMOTextNode*> CurrentlyActiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMOTextNode*> NodesHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMission* MissionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionID;
    
    UMission();
    UFUNCTION(BlueprintCallable)
    void NotifyNodeActivated(UMOTextNode* ActivatedNode);
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveCompleted(const FName ObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveActive(const FName ObjectiveName);
    
    UFUNCTION(BlueprintCallable)
    UMOObjectiveNode* GetObjectiveByName(const FName ObjectiveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMOTextNode* GetLastNodeWithBotText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMOBaseNode*> FindAllTreeTextNodes();
    
};

