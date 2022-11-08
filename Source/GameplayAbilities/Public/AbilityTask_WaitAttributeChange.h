#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "GameplayTagContainer.h"
#include "WaitAttributeChangeDelegateDelegate.h"
#include "GameplayAttribute.h"
#include "EWaitAttributeChangeComparison.h"
#include "AbilityTask_WaitAttributeChange.generated.h"

class UAbilityTask_WaitAttributeChange;
class UAbilitySystemComponent;
class UGameplayAbility;
class AActor;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitAttributeChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitAttributeChangeDelegate OnChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitAttributeChange();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison::Type> InComparisonType, float InComparisonValue, bool TriggerOnce, AActor* OptionalExternalOwner);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAttributeChange* WaitForAttributeChange(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor* OptionalExternalOwner);
    
};

