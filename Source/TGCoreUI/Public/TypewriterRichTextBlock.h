#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "TypewriterRichTextBlock.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTypewriterRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UTypewriterRichTextBlock();
    UFUNCTION(BlueprintCallable)
    void ShowNextTypewriterText();
    
    UFUNCTION(BlueprintCallable)
    void ShowFinalTypewriterText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTypewritingTextFinal();
    
};

