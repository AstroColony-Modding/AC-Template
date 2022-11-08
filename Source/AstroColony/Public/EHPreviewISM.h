#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "EHPreviewISM.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHPreviewISM : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UEHPreviewISM();
};

