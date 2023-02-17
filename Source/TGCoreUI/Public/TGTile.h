#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateBrush.h"
#include "TGWidget.h"
#include "TGTile.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGTile : public UTGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush OutlineBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush GlowBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FillBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle WidgetStyle;
    
    UTGTile();
    UFUNCTION(BlueprintCallable)
    void SetStyle(const FButtonStyle& InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(FLinearColor InBackgroundColor);
    
};

