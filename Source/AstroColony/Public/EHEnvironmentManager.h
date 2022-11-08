#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHSaveGameInterface.h"
#include "EHEnvironmentManager.generated.h"

class USoundBase;

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API AEHEnvironmentManager : public AActor, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundBase>> GameplayMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> IntroMusic;
    
    AEHEnvironmentManager();
    UFUNCTION(BlueprintCallable)
    void StartGameplayMusic();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSettingsApplied();
    
private:
    UFUNCTION(BlueprintCallable)
    void AudioFinished();
    
    
    // Fix for true pure virtual functions not being implemented
};

