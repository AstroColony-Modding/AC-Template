#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "TGUserWidget.h"
#include "Templates/SubclassOf.h"
#include "EHCampaignListWidget.generated.h"

class UEHCampaignListViewModel;
class UEHCampaignOptionViewModel;
class UScrollBox;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHCampaignListWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CampaignOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HortizontalSlotAligment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseMovementThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalScenariosList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHCampaignListViewModel* CampaignListViewModel;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHCampaignOptionViewModel* CurrentlySelectedOption;
    
    UEHCampaignListWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCampaignOptionSelected();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float CurrentOffset);
    
};

