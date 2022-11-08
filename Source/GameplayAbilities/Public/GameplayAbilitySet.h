#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayAbilityBindInfo.h"
#include "GameplayAbilitySet.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayAbilitySet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilityBindInfo> Abilities;
    
    UGameplayAbilitySet();
};

