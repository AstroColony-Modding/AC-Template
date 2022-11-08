#include "VoxelGeneratorCache.h"

class UVoxelTransformableGeneratorInstanceWrapper;
class UVoxelGeneratorInstanceWrapper;

UVoxelTransformableGeneratorInstanceWrapper* UVoxelGeneratorCache::MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker Picker) const {
    return NULL;
}

UVoxelGeneratorInstanceWrapper* UVoxelGeneratorCache::MakeGeneratorInstance(FVoxelGeneratorPicker Picker) const {
    return NULL;
}

UVoxelGeneratorCache::UVoxelGeneratorCache() {
}

