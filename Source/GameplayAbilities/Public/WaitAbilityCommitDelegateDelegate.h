#pragma once
#include "CoreMinimal.h"
#include "WaitAbilityCommitDelegateDelegate.generated.h"

class UGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitAbilityCommitDelegate, UGameplayAbility*, ActivatedAbility);

