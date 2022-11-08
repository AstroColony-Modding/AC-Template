#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "EHReactiveMeshComponent.generated.h"

class UEHInteractableObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHReactiveMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UEHReactiveMeshComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(UEHInteractableObject* InteractableObject, const FIntVector MeshCoord);
    
};

