#pragma once
#include "CoreMinimal.h"
#include "InteractableObjectArray.generated.h"

class UEHInteractableObject;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FInteractableObjectArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHInteractableObject*> InteractableObjects;
    
    FInteractableObjectArray();
};

