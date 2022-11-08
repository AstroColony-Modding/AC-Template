#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVoxelSpawnerActorSpawnType.h"
#include "VoxelInstancedMeshSettings.h"
#include "UObject/NoExportTypes.h"
#include "VoxelIntBox.h"
#include "VoxelToolRenderingRef.h"
#include "UObject/NoExportTypes.h"
#include "VoxelFloatTexture.h"
#include "UObject/NoExportTypes.h"
#include "VoxelMaterial.h"
#include "UObject/NoExportTypes.h"
#include "VoxelSpawnersSave.h"
#include "UObject/NoExportTypes.h"
#include "VoxelColorTexture.h"
#include "VoxelPaintMaterialFiveWayBlend.h"
#include "EVoxelMemoryUsageType.h"
#include "EVoxelRGBA.h"
#include "VoxelPaintMaterial.h"
#include "VoxelPaintMaterialUV.h"
#include "VoxelPaintMaterialColor.h"
#include "VoxelPaintMaterialSingleIndex.h"
#include "VoxelPaintMaterialMultiIndexRaw.h"
#include "VoxelPaintMaterialMultiIndex.h"
#include "ChunkDynamicDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "VoxelSpawnerActorSettings.h"
#include "VoxelBlueprintLibrary.generated.h"

class AVoxelWorld;
class AVoxelSpawnerActor;
class UVoxelHierarchicalInstancedStaticMeshComponent;
class UMaterialInterface;
class UObject;
class UStaticMesh;
class AActor;
class UTexture2D;

UCLASS(Blueprintable)
class VOXEL_API UVoxelBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdatePosition(AVoxelWorld* World, FIntVector position);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateBounds(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateAll(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool Undo(AVoxelWorld* World, TArray<FVoxelIntBox>& OutUpdatedBounds);
    
    UFUNCTION(BlueprintCallable)
    static FBox TransformVoxelBoxToGlobalBox(AVoxelWorld* World, FVoxelIntBox Box);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelIntBox TransformGlobalBoxToVoxelBox(AVoxelWorld* World, FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector Substract_IntVectorIntVector(FIntVector Left, FIntVector Right);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnVoxelSpawnerActorsInArea(TArray<AVoxelSpawnerActor*>& OutActors, AVoxelWorld* World, FVoxelIntBox Bounds, EVoxelSpawnerActorSpawnType SpawnType);
    
    UFUNCTION(BlueprintCallable)
    static AVoxelSpawnerActor* SpawnVoxelSpawnerActorByInstanceIndex(AVoxelWorld* World, UVoxelHierarchicalInstancedStaticMeshComponent* Component, int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetToolRenderingMaterial(AVoxelWorld* World, FVoxelToolRenderingRef Ref, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static void SetToolRenderingEnabled(AVoxelWorld* World, FVoxelToolRenderingRef Ref, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetToolRenderingBounds(AVoxelWorld* World, FVoxelToolRenderingRef Ref, FBox Bounds);
    
    UFUNCTION(BlueprintCallable)
    static void SetNumberOfVoxelThreads(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleData(AVoxelWorld* World, const FVector& Scale);
    
    UFUNCTION(BlueprintCallable)
    static void SaveFrame(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void RegenerateSpawners(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable)
    static bool Redo(AVoxelWorld* World, TArray<FVoxelIntBox>& OutUpdatedBounds);
    
    UFUNCTION(BlueprintCallable)
    static void RecreateSpawners(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void RecreateRender(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void Recreate(AVoxelWorld* World, bool bSaveData);
    
    UFUNCTION(BlueprintCallable)
    static void RaiseWarning(const FString& Message, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void RaiseInfo(const FString& Message, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void RaiseError(const FString& Message, UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 NumberOfCores();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector Multiply_IntVectorIntVector(FIntVector Left, FIntVector Right);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector Multiply_IntVectorInt(FIntVector Left, int32 Right);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector Multiply_IntIntVector(int32 Left, FIntVector Right);
    
    UFUNCTION(BlueprintCallable)
    static void MarkSpawnersDirty(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintPure)
    static FVoxelMaterial MakeRawMaterial(uint8 R, uint8 G, uint8 B, uint8 A, uint8 U0, uint8 V0, uint8 U1, uint8 v1, uint8 U2, uint8 v2, uint8 U3, uint8 V3);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MakeMaterialMask(bool R, bool G, bool B, bool A, bool U0, bool V0, bool U1, bool v1, bool U2, bool v2, bool U3, bool V3);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox MakeIntBoxFromGlobalPositionAndRadius(AVoxelWorld* World, FVector GlobalPosition, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void LogMemoryStats();
    
    UFUNCTION(BlueprintCallable)
    static void LoadFromSpawnersSave(AVoxelWorld* World, const FVoxelSpawnersSave& SAVE);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVoxelWorldMeshLoading(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVoxelWorldFoliageLoading(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVoxelPluginPro();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVoxelFloatTextureValid(FVoxelFloatTexture Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVoxelColorTextureValid(FVoxelFloatTexture Texture);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidRef(AVoxelWorld* World, FVoxelToolRenderingRef Ref);
    
    UFUNCTION(BlueprintCallable)
    static bool HasValueData(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool HasMaterialData(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AVoxelWorld* GetVoxelWorldOverlappingBox(UObject* WorldContextObject, FBox Box);
    
    UFUNCTION(BlueprintCallable)
    static AVoxelWorld* GetVoxelWorldOverlappingActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AVoxelWorld* GetVoxelWorldContainingPosition(UObject* WorldContextObject, FVector position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetVoxelFloatTextureSize(FVoxelFloatTexture Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetVoxelColorTextureSize(FVoxelColorTexture Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetUV(FVoxelMaterial Material, int32 Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTaskCount(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelSpawnersSave GetSpawnersSave(AVoxelWorld* World);
    
    UFUNCTION(BlueprintPure)
    static uint8 GetSingleIndex(FVoxelMaterial Material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox GetRenderBoundsOverlappingDataBounds(AVoxelWorld* World, FVoxelIntBox DataBounds, int32 LOD);
    
    UFUNCTION(BlueprintPure)
    static void GetRawMaterial(FVoxelMaterial Material, uint8& R, uint8& G, uint8& B, uint8& A, uint8& U0, uint8& V0, uint8& U1, uint8& v1, uint8& U2, uint8& v2, uint8& U3, uint8& V3);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPeakMemoryUsageInMB(EVoxelMemoryUsageType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumberOfVoxelThreads();
    
    UFUNCTION(BlueprintCallable)
    static FVector GetNormal(AVoxelWorld* World, FIntVector position);
    
    UFUNCTION(BlueprintPure)
    static void GetMultiIndex(FVoxelMaterial Material, bool bSortByStrength, float& Strength0, uint8& Index0, float& Strength1, uint8& Index1, float& Strength2, uint8& Index2, float& Strength3, uint8& Index3, float& Wetness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMin_Intvector(FIntVector Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMemoryUsageInMB(EVoxelMemoryUsageType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMax_Intvector(FIntVector Vector);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIntOutput(AVoxelWorld* World, FName Name, float X, float Y, float Z, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHistoryPosition(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatOutput(AVoxelWorld* World, FName Name, float X, float Y, float Z, float DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static float GetEstimatedCollisionsMemoryUsageInMB(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetColor(FVoxelMaterial Material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox GetBounds(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AVoxelWorld*> GetAllVoxelWorldsOverlappingBox(UObject* WorldContextObject, FBox Box);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AVoxelWorld*> GetAllVoxelWorldsOverlappingActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AVoxelWorld*> GetAllVoxelWorldsContainingPosition(UObject* WorldContextObject, FVector position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector Divide_IntVectorInt(FIntVector Left, int32 Right);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyToolRendering(AVoxelWorld* World, FVoxelToolRenderingRef Ref);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelFloatTexture CreateVoxelFloatTextureFromTextureChannel(UTexture2D* Texture, EVoxelRGBA Channel);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelColorTexture CreateVoxelColorTextureFromVoxelFloatTexture(FVoxelFloatTexture Texture, EVoxelRGBA Channel, bool bNormalize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelPaintMaterial CreateUVPaintMaterial(FVoxelPaintMaterialUV UV);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelToolRenderingRef CreateToolRendering(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CreateTextureFromVoxelFloatTexture(FVoxelFloatTexture VoxelTexture);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CreateTextureFromVoxelColorTexture(FVoxelColorTexture VoxelTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelPaintMaterial CreateSingleIndexPaintMaterial(FVoxelPaintMaterialSingleIndex SingleIndex);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CreateOrUpdateTextureFromVoxelFloatTexture(FVoxelFloatTexture VoxelTexture, UPARAM(Ref) UTexture2D*& Texture);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CreateOrUpdateTextureFromVoxelColorTexture(FVoxelColorTexture VoxelTexture, UPARAM(Ref) UTexture2D*& Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelPaintMaterial CreateMultiIndexWetnessPaintMaterial(float WetnessValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelPaintMaterial CreateMultiIndexRawPaintMaterial(FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelPaintMaterial CreateMultiIndexPaintMaterial(FVoxelPaintMaterialMultiIndex MultiIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelPaintMaterial CreateFiveWayBlendPaintMaterial(FVoxelPaintMaterialFiveWayBlend FiveWayBlend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelPaintMaterial CreateColorPaintMaterial(FVoxelPaintMaterialColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Compare_IntVectorIntVector(FIntVector Left, FIntVector Right);
    
    UFUNCTION(BlueprintCallable)
    static void CompactVoxelTexturePool(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void ClearValueData(AVoxelWorld* World, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMaterialData(AVoxelWorld* World, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable)
    static void ClearFrames(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void ClearDirtyData(AVoxelWorld* World, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllData(AVoxelWorld* World, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable)
    static void BindVoxelGenerationEvent(AVoxelWorld* World, FChunkDynamicDelegate OnGenerate, bool bFireExistingOnes, int32 ChunkSize, int32 GenerationDistanceInChunks);
    
    UFUNCTION(BlueprintCallable)
    static void BindVoxelChunkEvents(AVoxelWorld* World, FChunkDynamicDelegate OnActivate, FChunkDynamicDelegate OnDeactivate, bool bFireExistingOnes, int32 ChunkSize, int32 ActivationDistanceInChunks);
    
    UFUNCTION(BlueprintCallable)
    static bool AreCollisionsEnabled(AVoxelWorld* World, FVector position, int32& LOD, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelMaterial ApplyPaintMaterial(FVoxelMaterial Material, FVoxelPaintMaterial PaintMaterial, float Strength);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyNewMaterials(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyLODSettings(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void AddNeighborsToSet(const TSet<FIntVector>& InSet, TSet<FIntVector>& OutSet);
    
    UFUNCTION(BlueprintCallable)
    static void AddInstances(AVoxelWorld* World, UStaticMesh* Mesh, const TArray<FTransform>& Transforms, const TArray<FLinearColor>& Colors, FVoxelInstancedMeshSettings InstanceSettings, FVoxelSpawnerActorSettings ActorSettings, FVector FloatingDetectionOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector Add_IntVectorIntVector(FIntVector Left, FIntVector Right);
    
};

