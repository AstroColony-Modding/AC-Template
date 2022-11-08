#pragma once
#include "CoreMinimal.h"
#include "ETGInputControllerType.h"
#include "Components/RichTextBlock.h"
#include "InputCoreTypes.h"
#include "TGRichTextBlock.generated.h"

class UDataTable;
class UTGKeyNameDecorationStyle;

UCLASS(Blueprintable)
class TGCOREUI_API UTGRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ControllerKeysDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTGKeyNameDecorationStyle* KeyNameDecoration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowKeyNameDecoration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultTextStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey EditorPreviewKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETGInputControllerType> PreviewControllerType;
    
    UTGRichTextBlock();
};

