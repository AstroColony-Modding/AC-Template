#pragma once
#include "CoreMinimal.h"
#include "VisibilityBindable.h"
#include "EEHDialogBoxButtonImage.h"
#include "EHDialogBoxElementViewModel.h"
#include "EHDialogBoxButtonViewModel.generated.h"

class UEHBaseButtonViewModel;
class UTexture2D;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHDialogBoxButtonViewModel : public UEHDialogBoxElementViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHBaseButtonViewModel* ButtonViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityBindable ButtonImageVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnClickAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHDialogBoxButtonImage, UTexture2D*> ImageMap;
    
public:
    UEHDialogBoxButtonViewModel();
};

