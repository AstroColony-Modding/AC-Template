#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectGrantedAbilityRemovePolicy.h"
#include "GameplayAbilitySpecHandle.h"
#include "ScalableFloat.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySpecDef.generated.h"

class UGameplayAbility;
class UObject;

USTRUCT(BlueprintType)
struct FGameplayAbilitySpecDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FScalableFloat LevelScalableFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 InputID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UObject* SourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AssignedHandle;
    
    GAMEPLAYABILITIES_API FGameplayAbilitySpecDef();
};

