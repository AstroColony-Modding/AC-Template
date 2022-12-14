#pragma once
#include "CoreMinimal.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_GetLandscapeCollectionIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GetLandscapeCollectionIndex : public UVoxelExposedNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
public:
    UVoxelNode_GetLandscapeCollectionIndex();
};

