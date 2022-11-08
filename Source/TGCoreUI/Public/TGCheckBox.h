#pragma once
#include "CoreMinimal.h"
#include "TGToggle.h"
#include "Styling/SlateBrush.h"
#include "TGCheckBox.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGCheckBox : public UTGToggle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CheckedBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CheckboxZOrder;
    
    UTGCheckBox();
};

