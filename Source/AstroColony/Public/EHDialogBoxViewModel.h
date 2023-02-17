#pragma once
#include "CoreMinimal.h"
#include "TextBindable.h"
#include "Texture2DBindable.h"
#include "VisibilityBindable.h"
#include "EHPopupViewModel.h"
#include "EHDialogBoxViewModel.generated.h"

class UEHDialogBoxElementViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHDialogBoxViewModel : public UEHPopupViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable EHTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable EHDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTexture2DBindable Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityBindable ImageVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHDialogBoxElementViewModel*> DialogElements;
    
public:
    UEHDialogBoxViewModel();
    UFUNCTION(BlueprintCallable)
    void HandleAction(const FName& Action);
    
};

