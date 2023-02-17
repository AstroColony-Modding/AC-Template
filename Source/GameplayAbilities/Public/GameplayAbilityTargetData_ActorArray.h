#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetingLocationInfo.h"
#include "GameplayAbilityTargetData_ActorArray.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityTargetingLocationInfo SourceLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> TargetActorArray;
    
    FGameplayAbilityTargetData_ActorArray();
};

