#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETargetDataFilterSelf.h"
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
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETargetDataFilterSelf::Type> SelfFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseFilter;
    
    FGameplayTargetDataFilter();
};

