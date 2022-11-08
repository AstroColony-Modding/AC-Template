#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "VoxelMeshImporterSettingsBase.h"
#include "VoxelMeshImporterSettings.h"
#include "VoxelMeshImporterRenderTargetCache.h"
#include "VoxelMeshImporterLibrary.generated.h"

class UStaticMesh;
class UVoxelMeshImporterInputData;
class UObject;
class UTextureRenderTarget2D;
class UMaterialInterface;
class UVoxelDataAsset;

UCLASS(Blueprintable)
class VOXEL_API UVoxelMeshImporterLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelMeshImporterLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTextureRenderTarget2D* CreateTextureFromMaterial(UObject* WorldContextObject, UMaterialInterface* Material, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static UVoxelMeshImporterInputData* CreateMeshDataFromStaticMesh(UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ConvertMeshToVoxels_NoMaterials(UObject* WorldContextObject, UVoxelMeshImporterInputData* Mesh, FTransform Transform, bool bSubtractive, FVoxelMeshImporterSettingsBase Settings, UVoxelDataAsset*& Asset, int32& NumLeaks);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ConvertMeshToVoxels(UObject* WorldContextObject, UVoxelMeshImporterInputData* Mesh, FTransform Transform, bool bSubtractive, FVoxelMeshImporterSettings Settings, UPARAM(Ref) FVoxelMeshImporterRenderTargetCache& RenderTargetCache, UVoxelDataAsset*& Asset, int32& NumLeaks);
    
};

