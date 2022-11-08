#include "VoxelInstancedMaterialCollectionLayer.h"

FVoxelInstancedMaterialCollectionLayer::FVoxelInstancedMaterialCollectionLayer() {
    this->LayerIndex = 0;
    this->LayerMaterialInstance = NULL;
    this->TerrainType = EVoxelTerrainType::Mud;
}

