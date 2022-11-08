#pragma once
#include "CoreMinimal.h"
#include "VoxelSpawnerActor.h"
#include "VoxelMeshSpawnerActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class VOXEL_API AVoxelMeshSpawnerActor : public AVoxelSpawnerActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AVoxelMeshSpawnerActor();
};

