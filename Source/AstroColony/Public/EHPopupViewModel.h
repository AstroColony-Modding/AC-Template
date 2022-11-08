#pragma once
#include "CoreMinimal.h"
#include "TGPopupViewModel.h"
#include "EHPopupViewModel.generated.h"

class UEHButtonBarViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHPopupViewModel : public UTGPopupViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHButtonBarViewModel* ButtonBarViewModel;
    
public:
    UEHPopupViewModel();
};

