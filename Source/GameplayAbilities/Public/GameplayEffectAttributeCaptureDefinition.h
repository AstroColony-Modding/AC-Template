#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectAttributeCaptureSource.h"
#include "GameplayAttribute.h"
#include "GameplayEffectAttributeCaptureDefinition.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEffectAttributeCaptureDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AttributeToCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayEffectAttributeCaptureSource AttributeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapshot;
    
    FGameplayEffectAttributeCaptureDefinition();
};

