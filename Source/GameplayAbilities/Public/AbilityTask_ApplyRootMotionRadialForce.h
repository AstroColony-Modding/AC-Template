#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "AbilityTask_ApplyRootMotion_Base.h"
#include "ApplyRootMotionRadialForceDelegateDelegate.h"
#include "AbilityTask_ApplyRootMotionRadialForce.generated.h"

class AActor;
class UAbilityTask_ApplyRootMotionRadialForce;
class UCurveFloat;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionRadialForceDelegate OnFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* LocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bNoZForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthDistanceFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseFixedWorldDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator FixedWorldDirection;
    
public:
    UAbilityTask_ApplyRootMotionRadialForce();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewLocation, AActor* NewLocationActor, float NewStrength, float NewDuration, float NewRadius, bool NewBIsPush, bool NewBIsAdditive, bool NewBNoZForce, UCurveFloat* NewStrengthDistanceFalloff, UCurveFloat* NewStrengthOverTime, bool NewBUseFixedWorldDirection, FRotator NewFixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
    
};

