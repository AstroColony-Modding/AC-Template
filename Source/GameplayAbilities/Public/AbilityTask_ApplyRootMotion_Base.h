#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "GameFramework/RootMotionSource.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_ApplyRootMotion_Base.generated.h"

class UCharacterMovementComponent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotion_Base : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName ForceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERootMotionFinishVelocityMode FinishVelocityMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector FinishSetVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FinishClampVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* MovementComponent;
    
public:
    UAbilityTask_ApplyRootMotion_Base();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

