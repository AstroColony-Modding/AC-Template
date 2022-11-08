#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "EHCampaignListViewModel.generated.h"

class UEHCampaignOptionViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHCampaignListViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHCampaignOptionViewModel*> CampaignOptionViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHCampaignOptionViewModel* CurrentOption;
    
    UEHCampaignListViewModel();
};

