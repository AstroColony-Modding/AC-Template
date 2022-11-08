#pragma once
#include "CoreMinimal.h"
#include "EHScreenViewModel.h"
#include "EHCampaignViewModel.generated.h"

class UEHCampaignListViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHCampaignViewModel : public UEHScreenViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHCampaignListViewModel* CampaignListViewModel;
    
    UEHCampaignViewModel();
};

