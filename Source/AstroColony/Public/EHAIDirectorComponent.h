#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHAIDirectorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHAIDirectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEHAIDirectorComponent();
};

