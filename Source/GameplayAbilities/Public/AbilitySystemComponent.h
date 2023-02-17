#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTasksComponent.h"
#include "AbilitySystemReplicationProxyInterface.h"
#include "ActiveGameplayCueContainer.h"
#include "ActiveGameplayEffectHandle.h"
#include "ActiveGameplayEffectsContainer.h"
#include "AttributeDefaults.h"
#include "EAbilityGenericReplicatedEvent.h"
#include "GameplayAbilityActivationInfo.h"
#include "GameplayAbilityLocalAnimMontage.h"
#include "GameplayAbilityRepAnimMontage.h"
#include "GameplayAbilitySpecContainer.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayAttribute.h"
#include "GameplayCueParameters.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayEffectQuery.h"
#include "GameplayEffectSpecForRPC.h"
#include "GameplayEffectSpecHandle.h"
#include "GameplayEventData.h"
#include "MinimalReplicationTagCountMap.h"
#include "PredictionKey.h"
#include "ReplicatedPredictionKeyMap.h"
#include "ServerAbilityRPCBatch.h"
#include "Templates/SubclassOf.h"
#include "AbilitySystemComponent.generated.h"

class AActor;
class AGameplayAbilityTargetActor;
class UAbilitySystemComponent;
class UAnimMontage;
class UAttributeSet;
class UDataTable;
class UGameplayAbility;
class UGameplayEffect;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPLAYABILITIES_API UAbilitySystemComponent : public UGameplayTasksComponent, public IGameplayTagAssetInterface, public IAbilitySystemReplicationProxyInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAbilityConfirmOrCancel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityAbilityKey, int32, InputID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttributeDefaults> DefaultStartingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UAttributeSet*> SpawnedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AffectedAnimInstanceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutgoingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncomingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientDebugString, meta=(AllowPrivateAccess=true))
    TArray<FString> ClientDebugStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerDebugString, meta=(AllowPrivateAccess=true))
    TArray<FString> ServerDebugStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UserAbilityActivationInhibited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReplicationProxyEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressGrantAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressGameplayCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameplayAbilityTargetActor*> SpawnedTargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwningActor, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwningActor, meta=(AllowPrivateAccess=true))
    AActor* AvatarActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActivateAbilities, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecContainer ActivatableAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayAbility*> AllReplicatedInstancedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAnimMontage, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepAnimMontage RepAnimMontageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedIsNetSimulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingMontageRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectsContainer ActiveGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FActiveGameplayCueContainer ActiveGameplayCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FActiveGameplayCueContainer MinimalReplicationGameplayCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> BlockedAbilityBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMinimalReplicationTagCountMap MinimalReplicationTags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap;
    
    //UAbilitySystemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryActivateAbilityByClass(TSubclassOf<UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation);
    
    UFUNCTION(BlueprintCallable)
    bool TryActivateAbilitiesByTag(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
    
    UFUNCTION(BlueprintCallable)
    void TargetConfirm();
    
    UFUNCTION(BlueprintCallable)
    void TargetCancel();
    
    UFUNCTION(BlueprintCallable)
    void SetUserAbilityActivationInhibited(bool NewInhibit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32 NewLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32 NewLevel);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, const FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey);
    
    /*UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload);*/
    
    /*UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey);*/
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPrintDebug_RequestWithStrings(const TArray<FString>& Strings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPrintDebug_Request();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCurrentMontageSetPlayRate(UAnimMontage* ClientAnimMontage, float InPlayRate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCurrentMontageSetNextSectionName(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCurrentMontageJumpToSectionName(UAnimMontage* ClientAnimMontage, FName SectionName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<UGameplayEffect> GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerDebugString();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAnimMontage();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientDebugString();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActivateAbilities();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesExecuted(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueExecuted(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAdded_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_InvokeGameplayCueAdded(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectSpecHandle MakeOutgoingSpec(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectContextHandle MakeEffectContext() const;
    
    UFUNCTION(BlueprintCallable)
    void K2_InitStats(TSubclassOf<UAttributeSet> Attributes, const UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayCueActive(const FGameplayTag GameplayCueTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUserAbilityActivationInhibited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameplayEffectCount(TSubclassOf<UGameplayEffect> SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FActiveGameplayEffectHandle> GetActiveEffects(const FGameplayEffectQuery& Query) const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);
    
public:
    /*UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey);*/
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPrintDebug_Response(const TArray<FString>& Strings, int32 GameFlags);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);
    
    UFUNCTION(Client, Reliable)
    void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey);
    
public:
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(TSubclassOf<UGameplayEffect> GameplayEffectClass, UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(const FGameplayEffectSpecHandle& SpecHandle);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

