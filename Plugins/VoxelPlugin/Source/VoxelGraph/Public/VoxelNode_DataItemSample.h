#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeWithContext.h"
#include "EVoxelDataItemCombineMode.h"
#include "VoxelNode_DataItemSample.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_DataItemSample : public UVoxelNodeWithContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mask;
    
    UPROPERTY(EditAnywhere)
    EVoxelDataItemCombineMode CombineMode;
    
    UVoxelNode_DataItemSample();
};

