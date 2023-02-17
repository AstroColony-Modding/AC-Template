#include "VoxelGeneratorCache.h"

class UVoxelGeneratorInstanceWrapper;
class UVoxelTransformableGeneratorInstanceWrapper;

UVoxelTransformableGeneratorInstanceWrapper* UVoxelGeneratorCache::MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker Picker) const {
    return NULL;
}

UVoxelGeneratorInstanceWrapper* UVoxelGeneratorCache::MakeGeneratorInstance(FVoxelGeneratorPicker Picker) const {
    return NULL;
}

UVoxelGeneratorCache::UVoxelGeneratorCache() {
}

