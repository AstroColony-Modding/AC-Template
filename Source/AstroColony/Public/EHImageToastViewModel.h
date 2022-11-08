#pragma once
#include "CoreMinimal.h"
#include "EHToastViewModel.h"
#include "TextBindable.h"
#include "EEHToastNature.h"
#include "Texture2DBindable.h"
#include "EHImageToastViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHImageToastViewModel : public UEHToastViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable ToastTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable ToastDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTexture2DBindable ToastImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHToastNature ToastNature;
    
public:
    UEHImageToastViewModel();
};

