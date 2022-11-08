#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionMoveToForceDelegateDelegate.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "AbilityTask_ApplyRootMotionMoveToForce.generated.h"

class UCurveVector;
class UGameplayAbility;
class UAbilityTask_ApplyRootMotionMoveToForce;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionMoveToForceDelegate OnTimedOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionMoveToForceDelegate OnTimedOutAndDestinationReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSetNewMovementMode;
    
    UPROPERTY(EditAnywhere, Replicated)
    TEnumAsByte<EMovementMode> NewMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRestrictSpeedToExpected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveVector* PathOffsetCurve;
    
public:
    UAbilityTask_ApplyRootMotionMoveToForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewTargetLocation, float NewDuration, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
    
};

