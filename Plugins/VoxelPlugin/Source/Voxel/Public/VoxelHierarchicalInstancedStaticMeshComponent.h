#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "VoxelHierarchicalInstancedStaticMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOXEL_API UVoxelHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Voxel_BuildDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Voxel_DebugMaterial;
    
public:
    UVoxelHierarchicalInstancedStaticMeshComponent();
};

