#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActiveGameplayEffectHandle.h"
#include "EGameplayCueEvent.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayAbilityTargetingLocationInfo.h"
#include "GameplayAttribute.h"
#include "GameplayCueParameters.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayEffectSpecHandle.h"
#include "GameplayEventData.h"
#include "GameplayTagRequirements.h"
#include "GameplayTargetDataFilter.h"
#include "GameplayTargetDataFilterHandle.h"
#include "Templates/SubclassOf.h"
#include "AbilitySystemBlueprintLibrary.generated.h"

class AActor;
class IGameplayCueInterface;
class UGameplayCueInterface;
class UAbilitySystemComponent;
class UGameplayEffect;
class UObject;
class UPhysicalMaterial;
class USceneComponent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAbilitySystemBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TargetDataHasOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TargetDataHasHitResult(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TargetDataHasEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TargetDataHasActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32 StackCount);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void SendGameplayEventToActor(AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayEffectSpecHandle MakeSpecHandle(UGameplayEffect* InGameplayEffect, AActor* InInstigator, AActor* InEffectCauser, float InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, AActor* Instigator, AActor* EffectCauser, UObject* SourceObject, UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, AActor* FilterActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FGameplayAttribute Attribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasHitResult(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetTargetDataOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetTargetDataEndPointTransform(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTargetDataEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetOrigin(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    static float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetInstigatorActor(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHitResult GetHitResultFromTargetData(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHitResult GetHitResult(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameplayCueEndLocationAndNormal(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameplayCueDirection(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatAttributeFromAbilitySystemComponent(const UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatAttributeBaseFromAbilitySystemComponent(const UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatAttributeBase(const AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatAttribute(const AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDataCountFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetAllActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetActorCount(FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetActiveGameplayEffectRemainingDuration(UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAbilitySystemComponent* GetAbilitySystemComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ForwardGameplayCueToTarget(TScriptInterface<IGameplayCueInterface> TargetCueInterface, TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilityTargetDataHandle FilterTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float EvaluateAttributeValueWithTagsAndBase(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float EvaluateAttributeValueWithTags(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);
    
    UFUNCTION(BlueprintCallable)
    static void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);
    
    UFUNCTION(BlueprintCallable)
    static void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesTargetDataContainActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, const FGameplayTagRequirements& SourceTagReqs, const FGameplayTagRequirements& TargetTagReqs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayEffectSpecHandle CloneSpecHandle(AActor* InNewInstigator, AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakGameplayCueParameters(const FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, AActor*& Instigator, AActor*& EffectCauser, UObject*& SourceObject, UPhysicalMaterial*& PhysicalMaterial, int32& GameplayEffectLevel, int32& AbilityLevel, USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, const FGameplayAbilityTargetDataHandle& HandleToAdd);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, TSubclassOf<UGameplayEffect> LinkedGameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const FGameplayAbilityTargetingLocationInfo& SourceLocation, const FGameplayAbilityTargetingLocationInfo& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(const TArray<AActor*>& ActorArray, bool OneTargetPerHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(AActor* Actor);
    
};

