#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelGraphOutput.h"
#include "VoxelGraphOutputsConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOXELGRAPH_API UVoxelGraphOutputsConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelGraphOutput> Outputs;
    
    UVoxelGraphOutputsConfig();
};

