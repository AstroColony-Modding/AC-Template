#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeHelper.h"
#include "EVoxelNodeIfBranchToUseForRangeAnalysis.h"
#include "VoxelNode_If.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_If : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelNodeIfBranchToUseForRangeAnalysis BranchToUseForRangeAnalysis;
    
    UVoxelNode_If();
};

