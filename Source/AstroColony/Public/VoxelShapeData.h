#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VoxelShapeData.generated.h"

class UVoxelGenerator;

USTRUCT(BlueprintType)
struct FVoxelShapeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShapeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVoxelGenerator> GeneratorClass;
    
    ASTROCOLONY_API FVoxelShapeData();
};

