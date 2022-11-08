#include "VoxelDataAsset.h"

FIntVector UVoxelDataAsset::GetSize() const {
    return FIntVector{};
}

FVoxelIntBox UVoxelDataAsset::GetBounds() const {
    return FVoxelIntBox{};
}

UVoxelDataAsset::UVoxelDataAsset() {
    this->bSubtractiveAsset = false;
    this->Tolerance = 0.00f;
    this->UncompressedSizeInMB = 0.00f;
    this->CompressedSizeInMB = 0.00f;
    this->Source = EVoxelDataAssetImportSource::None;
    this->VoxelCustomVersion = 0;
    this->ValueConfigFlag = 0;
    this->MaterialConfigFlag = 0;
}

