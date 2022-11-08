#pragma once
#include "CoreMinimal.h"
#include "VoxelToolsBase.h"
#include "Engine/LatentActionManager.h"
#include "ModifiedVoxelMaterial.h"
#include "ModifiedVoxelValue.h"
#include "VoxelIntBox.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelFalloff.h"
#include "VoxelPaintMaterial.h"
#include "VoxelSphereTools.generated.h"

class AVoxelWorld;
class UObject;

UCLASS(Blueprintable)
class VOXEL_API UVoxelSphereTools : public UVoxelToolsBase {
    GENERATED_BODY()
public:
    UVoxelSphereTools();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void TrimSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, const FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void TrimSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, const FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SmoothSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Strength, int32 NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SmoothSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Strength, int32 NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SmoothMaterialSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Strength, int32 NumIterations, int32 Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SmoothMaterialSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Strength, int32 NumIterations, int32 Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetValueSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetMaterialSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, const FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, const FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RevertSphereToGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void RevertSphereToGenerator(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RevertSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, int32 HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void RevertSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, int32 HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RemoveSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ApplyMaterialKernelSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, int32 Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMaterialKernelSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, int32 Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ApplyKernelSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyKernelSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AddSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void AddSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender);
    
};

