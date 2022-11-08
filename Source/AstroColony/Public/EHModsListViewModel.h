#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "TextBindable.h"
#include "EHModsListViewModel.generated.h"

class UEHModsOptionViewModel;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModsOptionSelected);

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHModsListViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHModsOptionViewModel*> ModsOptionViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHModsOptionViewModel* CurrentOption;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModsOptionSelected OnModsOptionSelected;
    
    UEHModsListViewModel();
};

