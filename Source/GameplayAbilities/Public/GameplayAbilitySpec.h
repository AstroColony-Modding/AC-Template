#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilityActivationInfo.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilitySpec.generated.h"

class UGameplayAbility;
class UObject;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilitySpec : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    uint8 ActiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    uint8 InputPressed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    uint8 RemoveAfterActivation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    uint8 PendingRemove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    uint8 bActivateOnce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGameplayAbilityActivationInfo ActivationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DynamicAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<UGameplayAbility*> NonReplicatedInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayAbility*> ReplicatedInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle GameplayEffectHandle;
    
    FGameplayAbilitySpec();
};

