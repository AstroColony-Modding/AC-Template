#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SettingResolutionData.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FSettingResolutionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntPoint> Resolutions;
    
    FSettingResolutionData();
};

