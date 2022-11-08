#pragma once
#include "CoreMinimal.h"
#include "EHScreenViewModel.h"
#include "EHSaveLoadViewModel.generated.h"

class UEHSaveLoadListViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSaveLoadViewModel : public UEHScreenViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSaveLoadListViewModel* SaveLoadListViewModel;
    
    UEHSaveLoadViewModel();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePopupAction(FName Action);
    
};

