#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "EHCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UEHCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetSmoothingNetworkMode(ENetworkSmoothingMode NetworkSmoothingModeIn);
    
};

