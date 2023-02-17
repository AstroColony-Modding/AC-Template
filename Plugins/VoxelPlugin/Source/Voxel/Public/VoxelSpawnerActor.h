#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/BodyInstance.h"
#include "VoxelSpawnerActor.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class VOXEL_API AVoxelSpawnerActor : public AActor {
    GENERATED_BODY()
public:
    AVoxelSpawnerActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStaticMesh(UStaticMesh* Mesh, const TMap<int32, UMaterialInterface*>& SectionsMaterials, const FBodyInstance& CollisionPresets);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInstanceRandom(float Value);
    
};

