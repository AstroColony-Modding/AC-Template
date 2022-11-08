#pragma once
#include "CoreMinimal.h"
#include "TGViewModel.h"
#include "TextBindable.h"
#include "TGPopupViewModel.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGPopupViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable DescriptionText;
    
public:
    UTGPopupViewModel();
};

