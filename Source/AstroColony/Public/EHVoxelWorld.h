#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelShapeType.h"
#include "EVoxelTerrainType.h"
#include "ModifiedVoxelValue.h"
#include "VoxelIntBox.h"
#include "VoxelWorld.h"
#include "EHSaveGameInterface.h"
#include "VoxelShapeData.h"
#include "VoxelTerrainDigData.h"
#include "EHVoxelWorld.generated.h"

class AEHCharacter;
class AEHColliderWorld;
class AEHPlanetoidGrid;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHVoxelWorld : public AVoxelWorld, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName VoxelWorldUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelTerrainDigData VoxelTerrainDigData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelShapeData VoxelShapeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelTerrainType VoxelTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelShapeType VoxelShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector VoxelWorldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteepStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRemovingVoxel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEHColliderWorld* ColliderWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHPlanetoidGrid* PlanetoidGrid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HigherNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerNoise;
    
public:
    AEHVoxelWorld();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VoxelRemoved(const FIntVector& Coord, const int32 VoxelType);
    
    UFUNCTION(BlueprintCallable)
    void VoxelDiggingFinished(const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGeneratorParams();
    
    UFUNCTION(BlueprintCallable)
    void RemoveVoxelOld(const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveBox(const FVoxelIntBox& BoxBounds, AEHCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnValuesModified(const TArray<FModifiedVoxelValue>& ModifiedValues, AEHCharacter* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveBox(const FVoxelIntBox& BoxBounds, AEHCharacter* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddVoxel(const FIntVector& Coord);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadVoxelWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasParam(const FName ParamName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoxelTerrainType GetVoxelTypeFromLayer(const int32 LayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetPlanetoidSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySaveState();
    
    UFUNCTION(BlueprintCallable)
    void AddVoxel(const FIntVector& Coord);
    
    
    // Fix for true pure virtual functions not being implemented
};

