#pragma once
#include "CoreMinimal.h"
#include "VoxelBasicSpawnerScaleSettings.h"
#include "UObject/Object.h"
#include "EVoxelBasicSpawnerRotation.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelMeshSpawnerInstanceRandom.h"
#include "VoxelSpawnerActorSettings.h"
#include "VoxelInstancedMeshSettings.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VoxelMeshSpawner.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS(Blueprintable)
class VOXEL_API UVoxelMeshSpawner : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInterface*> MaterialsOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceBetweenInstancesInVoxel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelMeshSpawnerInstanceRandom InstanceRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorOutputName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistanceBetweenInstancesIsInCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelSpawnerActorSettings ActorSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSpawnActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelInstancedMeshSettings InstancedMeshSettings;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval GroundSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHeightRestriction;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval HeightRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightRestrictionFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelBasicSpawnerScaleSettings Scaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelBasicSpawnerRotation RotationAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LocalRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GlobalPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FloatingDetectionOffset;
    
    UVoxelMeshSpawner();
};

