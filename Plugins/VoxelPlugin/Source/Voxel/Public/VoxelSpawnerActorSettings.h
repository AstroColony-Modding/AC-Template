#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PhysicsEngine/BodyInstance.h"
#include "VoxelSpawnerActorSettings.generated.h"

class AVoxelSpawnerActor;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelSpawnerActorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVoxelSpawnerActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    FVoxelSpawnerActorSettings();
};

