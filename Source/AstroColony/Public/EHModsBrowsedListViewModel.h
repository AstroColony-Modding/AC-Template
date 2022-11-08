#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "EHModsBrowsedListViewModel.generated.h"

class UEHModsBrowsedOptionViewModel;
class UTGViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHModsBrowsedListViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModsSearchCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModsOptionSelected, UTGViewModel*, ViewModel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModInstalled);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHModsBrowsedOptionViewModel*> ModsBrowsedOptionViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsBrowsedOptionViewModel* CurrentOption;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModsOptionSelected OnModsOptionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModsSearchCompleted OnModsSearchCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModInstalled OnModInstalled;
    
    UEHModsBrowsedListViewModel();
private:
    UFUNCTION(BlueprintCallable)
    void HandleInstalCompleted(bool Success, const FString& Name);
    
};

