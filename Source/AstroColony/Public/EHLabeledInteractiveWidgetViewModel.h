#pragma once
#include "CoreMinimal.h"
#include "TGViewModel.h"
#include "TextBindable.h"
#include "VisibilityBindable.h"
#include "EHLabeledInteractiveWidgetViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHLabeledInteractiveWidgetViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable LabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable SecondaryLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityBindable Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowActionButton;
    
    UEHLabeledInteractiveWidgetViewModel();
};

