#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHSurvivalScreen.generated.h"

class UEHSurvivalViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSurvivalScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHSurvivalViewModel* SurvivalViewModel;
    
    UEHSurvivalScreen();
};

