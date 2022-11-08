#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "EHTabViewModel.generated.h"

class UTGViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHTabViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTGViewModel* TabReferenceViewModel;
    
    UEHTabViewModel();
};

