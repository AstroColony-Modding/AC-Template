#pragma once
#include "CoreMinimal.h"
#include "EHScreenViewModel.h"
#include "EHMainMenuViewModel.generated.h"

class UEHMenuContextualPreviewViewModel;
class UEHMenuViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHMainMenuViewModel : public UEHScreenViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHMenuViewModel* MenuViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHMenuViewModel* LastOpenedMenuViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHMenuContextualPreviewViewModel* MenuContextualPreviewViewModel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHMenuViewModel*> PinnedMenuViewModels;
    
public:
    UEHMainMenuViewModel();
};

