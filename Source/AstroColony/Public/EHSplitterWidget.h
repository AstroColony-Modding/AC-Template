#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHSplitterWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSplitterWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SplitterText;
    
public:
    UEHSplitterWidget();
};

