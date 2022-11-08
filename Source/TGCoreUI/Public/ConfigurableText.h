#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "ConfigurableText.generated.h"

USTRUCT(BlueprintType)
struct FConfigurableText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    TGCOREUI_API FConfigurableText();
};

