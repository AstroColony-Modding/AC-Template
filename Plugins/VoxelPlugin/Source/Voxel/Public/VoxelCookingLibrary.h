#pragma once
#include "CoreMinimal.h"
#include "VoxelUncompressedWorldSave.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelCookingSettings.h"
#include "VoxelCookedData.h"
#include "VoxelCookingLibrary.generated.h"

class AVoxelWorld;

UCLASS(Blueprintable)
class VOXEL_API UVoxelCookingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelCookingLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelCookingSettings MakeVoxelCookingSettingsFromVoxelWorld(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void LoadCookedVoxelData(FVoxelCookedData CookedData, AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelCookedData CookVoxelDataWithSave(FVoxelCookingSettings Settings, FVoxelUncompressedWorldSave SAVE);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelCookedData CookVoxelData(FVoxelCookingSettings Settings);
    
};

