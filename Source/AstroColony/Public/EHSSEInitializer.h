#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHSSEInitializer.generated.h"

class UEHInteractableObject;
class AEHGrid;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class ASTROCOLONY_API UEHSSEInitializer : public UObject {
    GENERATED_BODY()
public:
    UEHSSEInitializer();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializerApllied(UEHInteractableObject* Interactable, AEHGrid* Grid);
    
};

