#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectUIData.h"
#include "GameplayEffectUIData_TextOnly.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GAMEPLAYABILITIES_API UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UGameplayEffectUIData_TextOnly();
};

