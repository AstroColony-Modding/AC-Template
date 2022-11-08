#pragma once
#include "CoreMinimal.h"
#include "VoxelSetterNode.h"
#include "VoxelGraphOutput.h"
#include "VoxelNode_SetNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_SetNode : public UVoxelSetterNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGraphOutput CachedOutput;
    
public:
    UVoxelNode_SetNode();
};

