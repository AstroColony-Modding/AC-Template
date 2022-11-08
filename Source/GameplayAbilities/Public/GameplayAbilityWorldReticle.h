#pragma once
#include "CoreMinimal.h"
#include "WorldReticleParameters.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "GameplayAbilityWorldReticle.generated.h"

class APlayerController;

UCLASS(Blueprintable, NotPlaceable)
class GAMEPLAYABILITIES_API AGameplayAbilityWorldReticle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldReticleParameters Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceOwnerFlat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToTargetedActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargetValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargetAnActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* MasterPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetingActor;
    
public:
    AGameplayAbilityWorldReticle();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReticleMaterialParamVector(FName ParamName, FVector Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReticleMaterialParamFloat(FName ParamName, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValidTargetChanged(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetingAnActor(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParametersInitialized();
    
    UFUNCTION(BlueprintCallable)
    void FaceTowardSource(bool bFaceIn2D);
    
};

