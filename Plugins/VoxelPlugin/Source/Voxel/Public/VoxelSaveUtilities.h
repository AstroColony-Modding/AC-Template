#pragma once
#include "CoreMinimal.h"
#include "VoxelUncompressedWorldSave.h"
#include "VoxelCompressedWorldSave.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelSaveUtilities.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelSaveUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelSaveUtilities();
    UFUNCTION(BlueprintCallable)
    static bool DecompressVoxelSave(const FVoxelCompressedWorldSave& CompressedSave, FVoxelUncompressedWorldSave& OutUncompressedSave);
    
    UFUNCTION(BlueprintCallable)
    static void CompressVoxelSave(const FVoxelUncompressedWorldSave& UncompressedSave, FVoxelCompressedWorldSave& OutCompressedSave);
    
};

