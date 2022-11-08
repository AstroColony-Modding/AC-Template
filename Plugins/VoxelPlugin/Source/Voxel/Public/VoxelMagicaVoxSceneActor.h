#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "VoxelMagicaVoxSceneActor.generated.h"

class AVoxelWorld;
class AVoxelAssetActor;
class UVoxelMagicaVoxScene;

UCLASS(Blueprintable)
class VOXEL_API AVoxelMagicaVoxSceneActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AVoxelAssetActor*, FTransform> ActorTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVoxelWorld* VoxelWorld;
    
    AVoxelMagicaVoxSceneActor();
    UFUNCTION(BlueprintCallable)
    void SetScene(UVoxelMagicaVoxScene* Scene);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVoxelSize();
    
};

