#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "TGUserWidget.h"
#include "Templates/SubclassOf.h"
#include "EHModsBrowsedWidget.generated.h"

class UEHModsBrowsedListViewModel;
class UScrollBox;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHModsBrowsedWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ModsOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HortizontalSlotAligment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseMovementThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalModsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsBrowsedListViewModel* ModsBrowsedListViewModel;
    
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
    
    UEHModsBrowsedWidget();
private:
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float CurrentOffset);
    
    UFUNCTION(BlueprintCallable)
    void HandleModsSearchCompleted();
    
};

