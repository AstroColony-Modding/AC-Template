#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHSSEInitializer.generated.h"

class AEHGrid;
class UEHInteractableObject;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class ASTROCOLONY_API UEHSSEInitializer : public UObject {
    GENERATED_BODY()
public:
    UEHSSEInitializer();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializerApllied(UEHInteractableObject* Interactable, AEHGrid* Grid);
    
};

