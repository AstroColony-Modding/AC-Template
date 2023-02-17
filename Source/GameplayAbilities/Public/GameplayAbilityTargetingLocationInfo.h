#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGameplayAbilityTargetingLocationType.h"
#include "GameplayAbilityTargetingLocationInfo.generated.h"

class AActor;
class UGameplayAbility;
class UMeshComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityTargetingLocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayAbilityTargetingLocationType::Type> LocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LiteralTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* SourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* SourceAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceSocketName;
    
    FGameplayAbilityTargetingLocationInfo();
};

