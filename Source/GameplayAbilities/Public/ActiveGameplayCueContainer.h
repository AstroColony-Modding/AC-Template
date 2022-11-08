#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ActiveGameplayCue.h"
#include "ActiveGameplayCueContainer.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FActiveGameplayCueContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayCue> GameplayCues;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* Owner;
    
public:
    FActiveGameplayCueContainer();
};

