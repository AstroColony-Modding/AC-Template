#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActiveGameplayEffectQueryCustomMatch_DynamicDelegate.h"
#include "GameplayAttribute.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffectQuery.generated.h"

class UGameplayEffect;
class UObject;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectQueryCustomMatch_Dynamic CustomMatchDelegate_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery OwningTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery EffectTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery SourceTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ModifyingAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EffectSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EffectDefinition;
    
    FGameplayEffectQuery();
};

