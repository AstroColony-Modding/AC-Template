#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "EHNotificationDialogViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHNotificationDialogViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable BodyText;
    
public:
    UEHNotificationDialogViewModel();
};

