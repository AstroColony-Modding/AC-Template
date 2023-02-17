#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "EHPreviewISMCell.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHPreviewISMCell : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UEHPreviewISMCell();
};

