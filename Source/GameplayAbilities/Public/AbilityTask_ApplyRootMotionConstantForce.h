#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionConstantForceDelegateDelegate.h"
#include "GameFramework/RootMotionSource.h"
#include "AbilityTask_ApplyRootMotionConstantForce.generated.h"

class UCurveFloat;
class UAbilityTask_ApplyRootMotionConstantForce;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionConstantForceDelegate OnFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector WorldDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnableGravity;
    
public:
    UAbilityTask_ApplyRootMotionConstantForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewWorldDirection, float NewStrength, float NewDuration, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity);
    
};

