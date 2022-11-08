#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "EHHierarchicalInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UEHHierarchicalInstancedStaticMeshComponent();
    UFUNCTION(BlueprintCallable)
    void HISMMarkRenderStateDirty();
    
};

