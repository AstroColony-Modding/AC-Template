#pragma once
#include "CoreMinimal.h"
#include "TGUIAchievementsManager.h"
#include "EEHAchievement.h"
#include "EHAchievementsManager.generated.h"

class AEHGamePlayerController;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHAchievementsManager : public UTGUIAchievementsManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHGamePlayerController* PlayerController;
    
    UEHAchievementsManager();
    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(const EEHAchievement Achievement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShutdownCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QueryAchievementsCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAchievementUnlocked(const EEHAchievement Achievement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAchievementName(const EEHAchievement Achievement);
    
};

