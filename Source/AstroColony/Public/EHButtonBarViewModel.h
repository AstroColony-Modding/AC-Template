#pragma once
#include "CoreMinimal.h"
#include "TGViewModel.h"
#include "EHButtonBarViewModel.generated.h"

class UEHButtonBarEntryViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHButtonBarViewModel : public UTGViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHButtonBarEntryViewModel*> ButtonBarEntryViewModels;
    
public:
    UEHButtonBarViewModel();
};

