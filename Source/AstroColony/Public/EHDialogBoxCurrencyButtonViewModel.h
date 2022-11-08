#pragma once
#include "CoreMinimal.h"
#include "TextBindable.h"
#include "EHDialogBoxButtonViewModel.h"
#include "EHDialogBoxCurrencyButtonViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHDialogBoxCurrencyButtonViewModel : public UEHDialogBoxButtonViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable AmountText;
    
public:
    UEHDialogBoxCurrencyButtonViewModel();
};

