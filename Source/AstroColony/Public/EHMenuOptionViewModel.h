#pragma once
#include "CoreMinimal.h"
#include "Int32Bindable.h"
#include "TextBindable.h"
#include "EHViewModel.h"
#include "EHMenuOptionViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHMenuOptionViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Bindable OptionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable OptionName;
    
    UEHMenuOptionViewModel();
};

