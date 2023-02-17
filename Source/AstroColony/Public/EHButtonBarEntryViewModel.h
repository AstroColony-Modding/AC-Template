#pragma once
#include "CoreMinimal.h"
#include "TGViewModel.h"
#include "TextBindable.h"
#include "EButtonBarAction.h"
#include "EHButtonBarEntryViewModel.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHButtonBarEntryViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EButtonBarAction ButtonBarAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UEHButtonBarEntryViewModel();
    UFUNCTION(BlueprintCallable)
    FTextBindable GetDisplayText();
    
};

