#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "Texture2DBindable.h"
#include "EHBaseButtonViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHBaseButtonViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTexture2DBindable ButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHViewModel* PayloadViewModel;
    
public:
    UEHBaseButtonViewModel();
};

