#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "Fonts/SlateFontInfo.h"
#include "ETextBoxContentType.h"
#include "TGEditableTextBox.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextBoxContentType ContentType;
    
public:
    UTGEditableTextBox();
    UFUNCTION(BlueprintCallable)
    void UpdateCharacters(const ETextBoxContentType Type, const int32 NewCharacterLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(const FSlateFontInfo& InFont);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnTextChanged(const FText& InText);
    
};

