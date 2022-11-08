#pragma once
#include "CoreMinimal.h"
#include "DestructibleComponent.h"
#include "EHDestructibleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHDestructibleComponent : public UDestructibleComponent {
    GENERATED_BODY()
public:
    UEHDestructibleComponent();
};

