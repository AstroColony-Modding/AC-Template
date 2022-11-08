#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "GameplayCueParameters.generated.h"

class UPhysicalMaterial;
class UObject;
class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayCueParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RawMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectContextHandle EffectContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayTag MatchedTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayTag OriginalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AggregatedSourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AggregatedTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Instigator;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> EffectCauser;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> SourceObject;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UPhysicalMaterial> PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameplayEffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbilityLevel;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> TargetAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateLocationWhenUsingMinimalRepProxy;
    
    FGameplayCueParameters();
};

