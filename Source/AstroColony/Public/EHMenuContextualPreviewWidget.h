#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHMenuContextualPreviewWidget.generated.h"

class UEHMenuContextualPreviewViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHMenuContextualPreviewWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHMenuContextualPreviewViewModel* MenuContextualPreviewViewModel;
    
    UEHMenuContextualPreviewWidget();
};

