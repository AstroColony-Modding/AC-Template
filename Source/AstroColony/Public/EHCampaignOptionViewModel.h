#pragma once
#include "CoreMinimal.h"
#include "BoolBindable.h"
#include "TextBindable.h"
#include "Texture2DBindable.h"
#include "EHViewModel.h"
#include "EHCampaignOptionViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHCampaignOptionViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable OptionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTexture2DBindable OptionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolBindable IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolBindable IsConstructed;
    
    UEHCampaignOptionViewModel();
};

