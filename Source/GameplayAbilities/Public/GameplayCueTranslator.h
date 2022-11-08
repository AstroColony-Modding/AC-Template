#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayCueTranslator.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UGameplayCueTranslator : public UObject {
    GENERATED_BODY()
public:
    UGameplayCueTranslator();
};

