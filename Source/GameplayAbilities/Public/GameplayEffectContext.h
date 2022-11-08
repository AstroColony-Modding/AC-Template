#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectContext.generated.h"

class UAbilitySystemComponent;
class AActor;
class UGameplayAbility;
class UObject;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Instigator;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> EffectCauser;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UGameplayAbility> AbilityCDO;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    TWeakObjectPtr<UGameplayAbility> AbilityInstanceNotReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbilityLevel;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> SourceObject;
    
    UPROPERTY(EditAnywhere, Export, NotReplicated)
    TWeakObjectPtr<UAbilitySystemComponent> InstigatorAbilitySystemComponent;
    
    UPROPERTY(EditAnywhere)
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

