#pragma once
#include "CoreMinimal.h"
#include "TGViewModel.h"
#include "TextBindable.h"
#include "EHBreadcrumbEntryViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHBreadcrumbEntryViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable BreadcrumbText;
    
public:
    UEHBreadcrumbEntryViewModel();
};

