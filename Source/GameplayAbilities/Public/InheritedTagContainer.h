#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InheritedTagContainer.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FInheritedTagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CombinedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Added;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Removed;
    
    FInheritedTagContainer();
};

