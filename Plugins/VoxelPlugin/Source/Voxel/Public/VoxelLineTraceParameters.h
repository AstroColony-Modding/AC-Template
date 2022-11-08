#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "VoxelLineTraceParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVoxelLineTraceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TraceColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TraceHitColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawTime;
    
    VOXEL_API FVoxelLineTraceParameters();
};

