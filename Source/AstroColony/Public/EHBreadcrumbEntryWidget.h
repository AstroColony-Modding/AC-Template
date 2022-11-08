#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHBreadcrumbEntryWidget.generated.h"

class UEHBreadcrumbEntryViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBreadcrumbEntryWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHBreadcrumbEntryViewModel* BreadcrumbEntryViewModel;
    
public:
    UEHBreadcrumbEntryWidget();
};

