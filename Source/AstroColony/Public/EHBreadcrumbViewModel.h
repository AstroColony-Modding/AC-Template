#pragma once
#include "CoreMinimal.h"
#include "TGViewModel.h"
#include "EHBreadcrumbViewModel.generated.h"

class UEHBreadcrumbEntryViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHBreadcrumbViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHBreadcrumbEntryViewModel*> BreadcrumbEntries;
    
public:
    UEHBreadcrumbViewModel();
};

