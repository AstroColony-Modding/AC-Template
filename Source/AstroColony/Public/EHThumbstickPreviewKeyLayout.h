#pragma once
#include "CoreMinimal.h"
#include "ESettingsControllerActions.h"
#include "ESettingsThumbstickActions.h"
#include "EHThumbstickPreviewKeyLayout.generated.h"

USTRUCT(BlueprintType)
struct FEHThumbstickPreviewKeyLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESettingsThumbstickActions, ESettingsControllerActions> ActionsKeys;
    
    ASTROCOLONY_API FEHThumbstickPreviewKeyLayout();
};

