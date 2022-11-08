#pragma once
#include "CoreMinimal.h"
#include "TGGameUserSettings.h"
#include "EHGameUserSettings.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHGameUserSettings : public UTGGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CinematicAlreadyWatched;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastCompletedScenario;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestoreOpenWindowState;
    
public:
    UEHGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void RunBenchmarkConfigureSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBenchmarkResults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRestoreOpenWindowState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBenchmarkGPU();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBenchmarkCPU();
    
};

