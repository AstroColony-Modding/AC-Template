#pragma once
#include "CoreMinimal.h"
#include "VoxelMeshSpawnerActor.h"
#include "VoxelMeshWithPhysicsRelevancySpawnerActor.generated.h"

class UVoxelPhysicsRelevancyComponent;

UCLASS(Blueprintable)
class VOXEL_API AVoxelMeshWithPhysicsRelevancySpawnerActor : public AVoxelMeshSpawnerActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoxelPhysicsRelevancyComponent* PhysicsRelevancyComponent;
    
    AVoxelMeshWithPhysicsRelevancySpawnerActor();
};

