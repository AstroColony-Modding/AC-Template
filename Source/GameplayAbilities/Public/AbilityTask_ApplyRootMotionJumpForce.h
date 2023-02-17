#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "Engine/EngineTypes.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionJumpForceDelegateDelegate.h"
#include "AbilityTask_ApplyRootMotionJumpForce.generated.h"

class UAbilityTask_ApplyRootMotionJumpForce;
class UCurveFloat;
class UCurveVector;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionJumpForceDelegate OnFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionJumpForceDelegate OnLanded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinimumLandedTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bFinishOnLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveVector* PathOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeMappingCurve;
    
public:
    UAbilityTask_ApplyRootMotionJumpForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnLandedCallback(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator NewRotation, float NewDistance, float NewHeight, float NewDuration, float NewMinimumLandedTriggerTime, bool NewBFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve);
    
};

