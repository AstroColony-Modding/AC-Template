#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "EHChildActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHChildActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UEHChildActorComponent();
};

