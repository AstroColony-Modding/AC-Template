#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTaskOwnerInterface.h"
#include "AbilityTriggerData.h"
#include "ActiveGameplayEffectHandle.h"
#include "EGameplayAbilityInstancingPolicy.h"
#include "EGameplayAbilityNetExecutionPolicy.h"
#include "EGameplayAbilityNetSecurityPolicy.h"
#include "EGameplayAbilityReplicationPolicy.h"
#include "GameplayAbilityActivationInfo.h"
#include "GameplayAbilityActorInfo.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayAbilityTargetingLocationInfo.h"
#include "GameplayCueParameters.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayEffectSpecHandle.h"
#include "GameplayEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbility.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAnimMontage;
class UGameplayEffect;
class UGameplayTask;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayAbility : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateInputDirectly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoteInstanceEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayAbilityReplicationPolicy::Type> ReplicationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayAbilityInstancingPolicy::Type> InstancingPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerRespectsRemoteAbilityCancellation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetriggerInstancedAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityActivationInfo CurrentActivationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEventData CurrentEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayAbilityNetExecutionPolicy::Type> NetExecutionPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayAbilityNetSecurityPolicy::Type> NetSecurityPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> CostGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityTriggerData> AbilityTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> CooldownGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CancelAbilitiesWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockAbilitiesWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationOwnedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> ActiveTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAbilityEnding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCancelable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlockingOtherAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkPendingKillOnAbilityEnd;
    
public:
    UGameplayAbility();
    UFUNCTION(BlueprintCallable)
    void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeCanceled(bool bCanBeCanceled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGrantedByEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MontageStop(float OverrideBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);
    
    UFUNCTION(BlueprintCallable)
    void MontageJumpToSection(FName SectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const;
    
    UFUNCTION(BlueprintCallable)
    void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEndAbility(bool bWasCancelled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool K2_HasAuthority() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);
    
    UFUNCTION(BlueprintCallable)
    void K2_EndAbility();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_CommitExecute();
    
    UFUNCTION(BlueprintCallable)
    bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
    
    UFUNCTION(BlueprintCallable)
    bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
    
    UFUNCTION(BlueprintCallable)
    bool K2_CommitAbility();
    
    UFUNCTION(BlueprintCallable)
    bool K2_CheckAbilityCost();
    
    UFUNCTION(BlueprintCallable)
    bool K2_CheckAbilityCooldown();
    
    UFUNCTION(BlueprintCallable)
    void K2_CancelAbility();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, const FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const FGameplayEffectSpecHandle EffectSpecHandle);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ActivateAbilityFromEvent(const FGameplayEventData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ActivateAbility();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InvalidateClientPredictionKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwningComponentFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActorFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectContextHandle GetGrantedByEffectContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetCurrentSourceObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetCurrentMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAvatarActorFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilityActorInfo GetActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAbilityLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndTaskByInstanceName(FName InstanceName);
    
    UFUNCTION(BlueprintCallable)
    void EndAbilityState(FName OptionalStateNameToEnd);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);
    
    UFUNCTION(BlueprintCallable)
    void CancelTaskByInstanceName(FName InstanceName);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
    
    
    // Fix for true pure virtual functions not being implemented
};

