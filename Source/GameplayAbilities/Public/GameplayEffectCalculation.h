#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectCalculation.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UGameplayEffectCalculation : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;
    
public:
    UGameplayEffectCalculation();
};

