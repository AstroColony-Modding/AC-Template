#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "MovementModeChangedDelegateDelegate.h"
#include "Engine/EngineTypes.h"
#include "AbilityTask_WaitMovementModeChange.generated.h"

class ACharacter;
class UGameplayAbility;
class UAbilityTask_WaitMovementModeChange;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitMovementModeChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementModeChangedDelegate OnChange;
    
    UAbilityTask_WaitMovementModeChange();
    UFUNCTION()
    void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
    
};

