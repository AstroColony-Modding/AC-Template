#include "VoxelSpawnerDensity.h"

FVoxelSpawnerDensity::FVoxelSpawnerDensity() {
    this->Type = EVoxelSpawnerDensityType::Constant;
    this->Constant = 0.00f;
    this->bUseMainGenerator = false;
    this->RGBAChannel = EVoxelRGBA::R;
    this->UVChannel = 0;
    this->UVAxis = EVoxelSpawnerUVAxis::U;
    this->FiveWayBlendChannel = 0;
    this->Transform = EVoxelSpawnerDensityTransform::Identity;
}

