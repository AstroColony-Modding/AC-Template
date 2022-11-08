#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "EHTabCategoryViewModel.generated.h"

class UEHTabViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHTabCategoryViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHTabViewModel*> ChildrenViewModels;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHTabViewModel* CurrentTab;
    
public:
    UEHTabCategoryViewModel();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTabIndex();
    
};

