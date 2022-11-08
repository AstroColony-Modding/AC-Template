#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "VoxelMeshImporterSettings.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VoxelMeshImporter.generated.h"

class UStaticMesh;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class VOXEL_API AVoxelMeshImporter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelMeshImporterSettings Settings;
    
    UPROPERTY(EditAnywhere)
    uint32 SizeX;
    
    UPROPERTY(EditAnywhere)
    uint32 SizeY;
    
    UPROPERTY(EditAnywhere)
    uint32 SizeZ;
    
    UPROPERTY(EditAnywhere)
    uint64 NumberOfVoxels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeInMB;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox CachedBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* CachedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> CachedVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform CachedTransform;
    
public:
    AVoxelMeshImporter();
};

