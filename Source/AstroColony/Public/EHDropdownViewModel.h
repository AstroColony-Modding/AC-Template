#pragma once
#include "CoreMinimal.h"
#include "Int32Bindable.h"
#include "StringBindable.h"
#include "EHInt32OptionViewModel.h"
#include "EHDropdownViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHDropdownViewModel : public UEHInt32OptionViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringBindable SelectedOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Bindable SelectedOptionID;
    
    UEHDropdownViewModel();
    UFUNCTION(BlueprintCallable)
    void SelectOptionByName(const FString& OptionName);
    
    UFUNCTION(BlueprintCallable)
    void SelectOption(const int32 OptionID);
    
};

