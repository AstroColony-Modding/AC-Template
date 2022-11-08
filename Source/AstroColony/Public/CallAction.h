#pragma once
#include "CoreMinimal.h"
#include "CallAction.generated.h"

class UEHInteractableObject;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FCallAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHInteractableObject* InteractableObject;
    
    FCallAction();
};

