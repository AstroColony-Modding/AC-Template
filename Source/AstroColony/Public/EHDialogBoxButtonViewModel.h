#pragma once
#include "CoreMinimal.h"
#include "EHDialogBoxElementViewModel.h"
#include "VisibilityBindable.h"
#include "EEHDialogBoxButtonImage.h"
#include "EHDialogBoxButtonViewModel.generated.h"

class UTexture2D;
class UEHBaseButtonViewModel;

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

