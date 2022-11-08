#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TGUIPopup.h"
#include "EEHDialogBoxButtonImage.h"
#include "EDialogBoxElementType.h"
#include "EHDialogBoxWidget.generated.h"

class UTGConfigurableTextBlock;
class UTGRichTextBlock;
class UHorizontalBox;
class UEHCloseBox;
class UTGUserWidget;
class UEHDialogBoxViewModel;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHDialogBoxWidget : public UTGUIPopup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGRichTextBlock* Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHCloseBox* CloseBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDialogBoxElementType, TSubclassOf<UTGUserWidget>> DialogBoxElementClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHDialogBoxViewModel* DialogBoxViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHDialogBoxButtonImage, UTexture2D*> DialogBoxButtonImageTypes;
    
public:
    UEHDialogBoxWidget();
private:
    UFUNCTION(BlueprintCallable)
    void CreateElements();
    
};

