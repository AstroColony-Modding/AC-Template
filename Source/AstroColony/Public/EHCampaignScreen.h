#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHCampaignScreen.generated.h"

class UEHCampaignViewModel;
class UEHCampaignListWidget;
class UEHBaseButtonWidget;
class UEHCampaignOptionViewModel;

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

