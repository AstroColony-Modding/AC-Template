#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "EHToastViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHToastViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurationOnScreen;
    
public:
    UEHToastViewModel();
};

