#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EHCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UEHCharacterMovementComponent();
};

