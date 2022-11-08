#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EHSaveGameInterface.h"
#include "CampaignData.h"
#include "EHScenarioComponent.generated.h"

class UEHScenarioOverlayWidget;
class UMission;
class UEHTechnologyAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHScenarioComponent : public UActorComponent, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMission*> ScenarioMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHTechnologyAsset*, UMission*> TechnologyUnlockedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMission* SelectedMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHScenarioOverlayWidget> ScenarioOvelrayClass;
    
    UEHScenarioComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCampaignData GetScenarioCampaignData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMission* GetNextScenarioMission();
    
    
    // Fix for true pure virtual functions not being implemented
};

