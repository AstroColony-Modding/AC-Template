#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionMoveToActorForceDelegateDelegate.h"
#include "ERootMotionMoveToActorTargetOffsetType.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "AbilityTask_ApplyRootMotionMoveToActorForce.generated.h"

class AActor;
class UAbilityTask_ApplyRootMotionMoveToActorForce;
class UCurveFloat;
class UCurveVector;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionMoveToActorForceDelegate OnFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetLocation, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDisableDestinationReachedInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSetNewMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> NewMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRestrictSpeedToExpected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveVector* PathOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeMappingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* TargetLerpSpeedHorizontalCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* TargetLerpSpeedVerticalCurve;
    
public:
    UAbilityTask_ApplyRootMotionMoveToActorForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, FVector NewTargetLocationOffset, ERootMotionMoveToActorTargetOffsetType NewOffsetAlignment, float NewDuration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBDisableDestinationReachedInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* NewTargetActor, FVector NewTargetLocationOffset, ERootMotionMoveToActorTargetOffsetType NewOffsetAlignment, float NewDuration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool NewBSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool NewBRestrictSpeedToExpected, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBDisableDestinationReachedInterrupt);
    
};

