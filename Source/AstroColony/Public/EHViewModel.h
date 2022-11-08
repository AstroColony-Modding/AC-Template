#pragma once
#include "CoreMinimal.h"
#include "TGViewModel.h"
#include "TextBindable.h"
#include "EHViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable ToolTipText;
    
public:
    UEHViewModel();
};

