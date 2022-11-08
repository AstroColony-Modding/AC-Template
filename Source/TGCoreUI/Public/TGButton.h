#pragma once
#include "CoreMinimal.h"
#include "TGTile.h"
#include "Styling/SlateColor.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TGButton.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGButton : public UTGTile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TextColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TextFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TextMargin;
    
    UTGButton();
    UFUNCTION(BlueprintCallable)
    void SetTextColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
};

