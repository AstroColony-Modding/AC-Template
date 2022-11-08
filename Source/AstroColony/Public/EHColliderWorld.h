#pragma once
#include "CoreMinimal.h"
#include "VoxelWorld.h"
#include "EHColliderWorld.generated.h"

class AEHVoxelWorld;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHColliderWorld : public AVoxelWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEHVoxelWorld* VoxelWorldMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCreateColliderWorld;
    
    AEHColliderWorld();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateColliderGridVisibility();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGeneratorParams();
    
};

