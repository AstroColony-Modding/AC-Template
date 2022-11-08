#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitVelocityChangeDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_WaitVelocityChange.generated.h"

class UAbilityTask_WaitVelocityChange;
class UMovementComponent;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitVelocityChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitVelocityChangeDelegate OnVelocityChage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementComponent* CachedMovementComponent;
    
public:
    UAbilityTask_WaitVelocityChange();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude);
    
};

