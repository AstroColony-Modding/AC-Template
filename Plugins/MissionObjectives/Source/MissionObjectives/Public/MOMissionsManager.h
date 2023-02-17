#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissionSavegameData.h"
#include "Templates/SubclassOf.h"
#include "MOMissionsManager.generated.h"

class UMOObjectiveNode;
class UMOTextNode;
class UMission;
class UMissionSaveGame;
class UObjectiveAsset;
class UReferencedMissionObject;
class USaveGame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MISSIONOBJECTIVES_API UMOMissionsManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionStarted, UMission*, Mission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMissionsChanged, const TArray<UMission*>&, OngoingMissions, const TArray<UMission*>&, SucessfulMissions, const TArray<UMission*>&, FailureMissions);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionRecovered, const UMission*, Mission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionObjectiveCompleted, const UMission*, Mission, const UMOObjectiveNode*, Node);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionObjectiveActivated, const UMission*, Mission, const UMOObjectiveNode*, Node);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionNodeActivated, const UMission*, Mission, const UMOTextNode*, Node);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionEnded, UMission*, Mission, bool, IsSuccesfull);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLastActiveMissionChanged, UMission*, Mission);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStarted OnMissionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionEnded OnMissionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLastActiveMissionChanged OnLastActiveMissionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionsChanged OnMissionsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionNodeActivated OnMissionNodeActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionObjectiveActivated OnMissionObjectiveActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionObjectiveCompleted OnMissionObjectiveCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionRecovered OnMissionRecovered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionSaveGame> SaveGameTemplate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMission*> OngoingMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMission*> SucessfulMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMission*> FailureMissions;
    
public:
    UMOMissionsManager();
    UFUNCTION(BlueprintCallable)
    void SwapWithNextMission(UMission* SelectedMission);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartMission(UMission* Mission, const FName MissionID, UReferencedMissionObject* ReferencedMissionObject);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CompleteObjective(FName ObjectiveName, UMission* Mission, uint8 RepetitionsCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveMissionsToSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveMissionsToObject(const uint8 PlayerNetworkIndex, USaveGame* SaveGameObject);
    
    UFUNCTION(BlueprintCallable)
    void NotifyLastMissionNodeActivated(UMission* Mission);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiStartMission(UMission* Mission, const FName MissionID, UReferencedMissionObject* ReferencedMissionObject);
    
    UFUNCTION(BlueprintCallable)
    void LoadMissionsFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadMissionsFromObject(const uint8 PlayerNetworkIndex, USaveGame* SaveGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionObjectiveInProgress(UMission* Mission, const FName MissionID, const FName ObjectiveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionInProgress(UMission* Mission, const FName MissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionCompleted(UMission* Mission, const FName MissionID);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleObjectiveCompleted(UMission* Mission, UMOObjectiveNode* OObjectiveNode);
    
    UFUNCTION(BlueprintCallable)
    void HandleNodeActivated(UMission* Mission, UMOTextNode* Node);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USaveGame* GetSavegameMissionsObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMission*> GetMissionsInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMission*> GetMissionsFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMission* GetMissionByTemplate(UMission* MissionTemplate);
    
    UFUNCTION(BlueprintCallable)
    void EndMission(UMission* Mission, bool IsSuccesfull);
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjectiveByAsset(UObjectiveAsset* ObjectiveAsset, UMission* Mission, uint8 RepetitionsCount);
    
    UFUNCTION(BlueprintCallable)
    void CompleteObjective(FName ObjectiveName, UMission* Mission, uint8 RepetitionsCount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRecovery(const FMissionSavegameData& MissionSavegameData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CompleteObjective(FName ObjectiveName, UMission* Mission, uint8 RepetitionsCount);
    
};

