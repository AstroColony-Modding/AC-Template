#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHMissionSelectionScreen.generated.h"

class UEHMissionSelectionViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHMissionSelectionScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHMissionSelectionViewModel* MissionSelectionViewModel;
    
    UEHMissionSelectionScreen();
};

