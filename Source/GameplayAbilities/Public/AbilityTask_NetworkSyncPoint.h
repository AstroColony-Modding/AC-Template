#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "EAbilityTaskNetSyncType.h"
#include "NetworkSyncDelegateDelegate.h"
#include "AbilityTask_NetworkSyncPoint.generated.h"

class UAbilityTask_NetworkSyncPoint;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_NetworkSyncPoint : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkSyncDelegate OnSync;
    
    UAbilityTask_NetworkSyncPoint();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_NetworkSyncPoint* WaitNetSync(UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
    
    UFUNCTION(BlueprintCallable)
    void OnSignalCallback();
    
};

