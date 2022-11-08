#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Components/TextWidgetTypes.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "OnRadiobuttonsStateChangeDelegate.h"
#include "TGRadioButtonsLine.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGRadioButtonsLine : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSelectedIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TextColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TextFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TextMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TextShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle CheckBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadiobuttonsStateChange OnRadiobuttonsStateChange;
    
    UTGRadioButtonsLine();
    UFUNCTION(BlueprintCallable)
    void SetTextColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedItemByName(const FString& ItemName);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedItemByIndex(const int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetButtons(const TArray<FText>& ButtonsIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedItemName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedItemIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetButtons();
    
};

