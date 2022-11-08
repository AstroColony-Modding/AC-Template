#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TGGameInstance.h"
#include "UObject/NoExportTypes.h"
#include "EHScenarioParams.h"
#include "EHServerParams.h"
#include "EEHSoftAsyncLoadPhase.h"
#include "EHGameInstance.generated.h"

class UEHSaveGame;
class UEHScreenManager;
class AEHPlayerController;
class UEHLayerManager;
class UEHAchievementsManager;

UCLASS(Blueprintable, NonTransient)
class ASTROCOLONY_API UEHGameInstance : public UTGGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadGameFinished, bool, IsLoadedFromSavegame);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameSaved, bool, IsAutosave);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHSaveGame> SavegameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetType> AssetTypesToLoad;
    
    UPROPERTY(EditAnywhere)
    uint8 NumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavegameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScenarioName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString randomSeedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StreamingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHScenarioParams ScenarioParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHServerParams ServerParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCampaignScenarioParams;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadGameFinished OnLoadGameFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameSaved OnGameSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSaveGame* CurrentSaveGame;
    
    UPROPERTY(EditAnywhere)
    uint8 PlayerNetworkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> GameplaySoftAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHSoftAsyncLoadPhase SoftAsyncLoadPhase;
    
    UPROPERTY(EditAnywhere)
    FText SoftAsyncLoadPhaseNames[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftAsyncLoadingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsyncSoftAssetsCounter;
    
    UEHGameInstance();
    UFUNCTION(BlueprintCallable)
    void StartAsyncSoftAssetsLoading();
    
    UFUNCTION(BlueprintCallable)
    void ResetState();
    
    UFUNCTION(BlueprintCallable)
    void QuickSave();
    
    UFUNCTION(BlueprintCallable)
    void QuickLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInvalidSavegameVersionLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSandboxGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadGameFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncSoftLoadingActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSavegame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSessionTimeInSeconds();
    
    UFUNCTION(BlueprintCallable)
    UEHScreenManager* GetScreenManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHScenarioParams GetScenarioParams(FName Name);
    
    UFUNCTION(BlueprintPure)
    uint8 GetPlayerNetworkIndex(AEHPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    UEHLayerManager* GetLayerManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAsyncSoftPhaseProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAsyncSoftPhaseName();
    
    UFUNCTION(BlueprintCallable)
    UEHAchievementsManager* GetAchievementsManager();
    
    UFUNCTION(BlueprintCallable)
    void DebugToast(const FString& NewDebugToast);
    
    UFUNCTION(BlueprintCallable)
    void CreateAutosave(int32 AutosaveMaxCount);
    
};

