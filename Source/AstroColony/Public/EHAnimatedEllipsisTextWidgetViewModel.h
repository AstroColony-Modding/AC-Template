#pragma once
#include "CoreMinimal.h"
#include "BoolBindable.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "EHAnimatedEllipsisTextWidgetViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHAnimatedEllipsisTextWidgetViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable TextToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolBindable ShowEllipsis;
    
    UEHAnimatedEllipsisTextWidgetViewModel();
};

