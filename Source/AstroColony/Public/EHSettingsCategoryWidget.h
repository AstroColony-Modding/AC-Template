#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "TGUserWidget.h"
#include "Templates/SubclassOf.h"
#include "EHSettingsCategoryWidget.generated.h"

class UEHSettingsCategoryViewModel;
class UEHSplitterWidget;
class UScrollBox;
class UTGViewModel;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSettingsCategoryWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SettingsOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHSplitterWidget> SplitterWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HortizontalSlotAligment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseMovementThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsCategoryViewModel* SettingsCategoryViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin OptionsPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ExtraIndentPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldScrollAnimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDescendantScrollDestination DescendantScrollDestination;
    
    UEHSettingsCategoryWidget();
private:
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float CurrentOffset);
    
    UFUNCTION(BlueprintCallable)
    void HandleSettingsOptionUnhovered(UUserWidget* InUserWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleSettingsOptionSelected(UTGViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable)
    void HandleSettingsOptionHovered(UUserWidget* InUserWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleSettingsButtonPressed(UTGViewModel* InViewModel);
    
};

