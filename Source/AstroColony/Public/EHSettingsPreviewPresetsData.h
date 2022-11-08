#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHPreviewKeyPreset.h"
#include "EHThumbstickPreviewKeyLayout.h"
#include "EHSettingsPreviewPresetsData.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSettingsPreviewPresetsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEHPreviewKeyPreset> SettingPreviewPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEHThumbstickPreviewKeyLayout> SettingsThumbstickLayouts;
    
    UEHSettingsPreviewPresetsData();
};

