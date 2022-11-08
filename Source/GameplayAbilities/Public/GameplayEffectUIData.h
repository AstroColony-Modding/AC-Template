#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayEffectUIData.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class GAMEPLAYABILITIES_API UGameplayEffectUIData : public UObject {
    GENERATED_BODY()
public:
    UGameplayEffectUIData();
};

