#pragma once
#include "CoreMinimal.h"
#include "ETargetDataFilterSelf.h"
#include "Templates/SubclassOf.h"
#include "GameplayTargetDataFilter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayTargetDataFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RequiredActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETargetDataFilterSelf::Type> SelfFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseFilter;
    
    FGameplayTargetDataFilter();
};

