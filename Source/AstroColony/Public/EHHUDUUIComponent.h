#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHHUDUUIComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHHUDUUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEHHUDUUIComponent();
};

