#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReferencedMissionObject.generated.h"

class UMOTextNode;
class UMOMissionsManager;
class APlayerController;
class UMission;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class MISSIONOBJECTIVES_API UReferencedMissionObject : public UObject {
    GENERATED_BODY()
public:
    UReferencedMissionObject();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NodeActivated(UMOTextNode* ActivatedNode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissionStarted(APlayerController* PlayerController, const bool IsRecovered);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissionEnded(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LocalMissionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Construct(UMOMissionsManager* MissionManager, UMission* Mission);
    
};

