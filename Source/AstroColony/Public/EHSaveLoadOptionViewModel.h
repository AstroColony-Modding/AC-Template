#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "EHSaveLoadOptionViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSaveLoadOptionViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable ScenarioName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable OptionDate;
    
    UEHSaveLoadOptionViewModel();
};

