#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHCampaignScreen.generated.h"

class UEHBaseButtonWidget;
class UEHCampaignListWidget;
class UEHCampaignOptionViewModel;
class UEHCampaignViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHCampaignScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHCampaignViewModel* CampaignViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHCampaignListWidget* CampaignList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* StartTutorialButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHCampaignOptionViewModel* CurrentlySelectedOption;
    
public:
    UEHCampaignScreen();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartTutorialButtonPressed(UEHBaseButtonWidget* Button);
    
};

