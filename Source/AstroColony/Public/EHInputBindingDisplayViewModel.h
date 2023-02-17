#pragma once
#include "CoreMinimal.h"
#include "TextBindable.h"
#include "VisibilityBindable.h"
#include "EHTextOptionViewModel.h"
#include "EHInputBindingDisplayViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHInputBindingDisplayViewModel : public UEHTextOptionViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityBindable MissingBindingVisibility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable BindingText;
    
public:
    UEHInputBindingDisplayViewModel();
};

