#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ESettingsControllerActions.h"
#include "EHPreviewKeyPreset.generated.h"

USTRUCT(BlueprintType)
struct FEHPreviewKeyPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, ESettingsControllerActions> ActionsKeys;
    
    ASTROCOLONY_API FEHPreviewKeyPreset();
};

