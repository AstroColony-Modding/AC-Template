#pragma once
#include "CoreMinimal.h"
#include "EHStorageObject.h"
#include "EHInteractableServiceContainer.generated.h"

class UEHAIObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHInteractableServiceContainer : public UEHStorageObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEHAIObject*> AIsInside;
    
public:
    UEHInteractableServiceContainer();
};

