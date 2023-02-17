#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectContext.generated.h"

class AActor;
class UAbilitySystemComponent;
class UGameplayAbility;
class UObject;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Instigator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> EffectCauser;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGameplayAbility> AbilityCDO;
    
    UPROPERTY(EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGameplayAbility> AbilityInstanceNotReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbilityLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> SourceObject;
    
    UPROPERTY(EditAnywhere, Export, NotReplicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> InstigatorAbilitySystemComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasWorldOrigin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicateSourceObject: 1;
    
public:
    FGameplayEffectContext();
};

