#pragma once
#include "CoreMinimal.h"
#include "TGCodingStandardBlueprintVarGroup.generated.h"

USTRUCT(BlueprintType)
struct FTGCodingStandardBlueprintVarGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WidgetCameraLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTraceVolumeWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTraceVolumeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCameraWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowWeaponWidget;
    
    ASTROCOLONY_API FTGCodingStandardBlueprintVarGroup();
};

