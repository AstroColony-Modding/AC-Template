#pragma once
#include "CoreMinimal.h"
#include "TGViewModel.h"
#include "TextBindable.h"
#include "VisibilityBindable.h"
#include "EHSettingsWarningViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSettingsWarningViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityBindable Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable DisplayText;
    
public:
    UEHSettingsWarningViewModel();
};

