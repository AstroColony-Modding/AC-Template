#pragma once
#include "CoreMinimal.h"
#include "EHScreenViewModel.h"
#include "EHModsViewModel.generated.h"

class UEHModsBrowsedListViewModel;
class UEHModsListViewModel;
class UTGViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHModsViewModel : public UEHScreenViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsListViewModel* ModsListViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsBrowsedListViewModel* ModsBrowsedListViewModel;
    
    UEHModsViewModel();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePopupAction(FName Action);
    
    UFUNCTION(BlueprintCallable)
    void HandleModsOptionSelected(UTGViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable)
    void HandleModInstalled();
    
};

