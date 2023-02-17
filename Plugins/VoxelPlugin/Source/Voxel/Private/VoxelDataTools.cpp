#include "VoxelDataTools.h"

class AVoxelWorld;
class UObject;
class UVoxelHeightmapAsset;

void UVoxelDataTools::SetValueAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FIntVector position, float Value, bool bHideLatentWarnings) {
}

void UVoxelDataTools::SetValue(AVoxelWorld* World, FIntVector position, float Value) {
}

void UVoxelDataTools::SetMaterialAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FIntVector position, FVoxelMaterial Material, bool bHideLatentWarnings) {
}

void UVoxelDataTools::SetMaterial(AVoxelWorld* World, FIntVector position, FVoxelMaterial Material) {
}

void UVoxelDataTools::SetBoxAsDirtyAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bDirtyValues, bool bDirtyMaterials, bool bHideLatentWarnings) {
}

void UVoxelDataTools::SetBoxAsDirty(AVoxelWorld* World, FVoxelIntBox Bounds, bool bDirtyValues, bool bDirtyMaterials) {
}

void UVoxelDataTools::RoundVoxelsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::RoundVoxels(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

void UVoxelDataTools::RoundToGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bPreserveNormals, bool bHideLatentWarnings) {
}

void UVoxelDataTools::RoundToGenerator(AVoxelWorld* World, FVoxelIntBox Bounds, bool bPreserveNormals) {
}

bool UVoxelDataTools::LoadFromSave(const AVoxelWorld* World, const FVoxelUncompressedWorldSave& SAVE) {
    return false;
}

bool UVoxelDataTools::LoadFromCompressedSave(const AVoxelWorld* World, const FVoxelCompressedWorldSave& SAVE) {
    return false;
}

void UVoxelDataTools::GetVoxelsValueAndMaterialAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVoxelValueMaterial>& Voxels, AVoxelWorld* World, const TArray<FIntVector>& Positions, bool bHideLatentWarnings) {
}

void UVoxelDataTools::GetVoxelsValueAndMaterial(TArray<FVoxelValueMaterial>& Voxels, AVoxelWorld* World, const TArray<FIntVector>& Positions) {
}

void UVoxelDataTools::GetValueAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Value, AVoxelWorld* World, FIntVector position, bool bHideLatentWarnings) {
}

void UVoxelDataTools::GetValue(float& Value, AVoxelWorld* World, FIntVector position) {
}

void UVoxelDataTools::GetSaveAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelUncompressedWorldSave& OutSave, bool bHideLatentWarnings) {
}

void UVoxelDataTools::GetSave(AVoxelWorld* World, FVoxelUncompressedWorldSave& OutSave) {
}

void UVoxelDataTools::GetMaterialAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelMaterial& Material, AVoxelWorld* World, FIntVector position, bool bHideLatentWarnings) {
}

void UVoxelDataTools::GetMaterial(FVoxelMaterial& Material, AVoxelWorld* World, FIntVector position) {
}

void UVoxelDataTools::GetInterpolatedValue(float& Value, AVoxelWorld* World, FVector position) {
}

FVoxelDataMemoryUsageInMB UVoxelDataTools::GetDataMemoryUsageInMB(AVoxelWorld* World) {
    return FVoxelDataMemoryUsageInMB{};
}

void UVoxelDataTools::GetCompressedSaveAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelCompressedWorldSave& OutSave, bool bHideLatentWarnings) {
}

void UVoxelDataTools::GetCompressedSave(AVoxelWorld* World, FVoxelCompressedWorldSave& OutSave) {
}

void UVoxelDataTools::FindHeightVoxel(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FIntVector>& Coords, AVoxelWorld* World, const FIntVector& VoxelSize, bool bHideLatentWarnings) {
}

void UVoxelDataTools::FindClosestNonEmptyVoxelAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelFindClosestNonEmptyVoxelResult& Result, AVoxelWorld* World, FVector position, bool bReadMaterial, bool bConvertToVoxelSpace, bool bHideLatentWarnings) {
}

void UVoxelDataTools::FindClosestNonEmptyVoxel(FVoxelFindClosestNonEmptyVoxelResult& Result, AVoxelWorld* World, FVector position, bool bReadMaterial, bool bConvertToVoxelSpace) {
}

void UVoxelDataTools::CompressIntoHeightmap(AVoxelWorld* World, UVoxelHeightmapAsset* HeightmapAsset, bool bHeightmapAssetMatchesWorld) {
}

void UVoxelDataTools::ClearUnusedMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::ClearUnusedMaterials(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

void UVoxelDataTools::ClearCachedValuesAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::ClearCachedValues(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

void UVoxelDataTools::ClearCachedMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::ClearCachedMaterials(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

void UVoxelDataTools::CheckIfSameAsGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::CheckIfSameAsGenerator(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

void UVoxelDataTools::CheckForSingleValuesAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::CheckForSingleValues(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

void UVoxelDataTools::CheckForSingleMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::CheckForSingleMaterials(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

void UVoxelDataTools::CacheValuesAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::CacheValues(AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded) {
}

void UVoxelDataTools::CacheMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelDataTools::CacheMaterials(AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded) {
}

UVoxelDataTools::UVoxelDataTools() {
}

