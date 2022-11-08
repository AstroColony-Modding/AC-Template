#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "EHScreenViewModel.generated.h"

class UEHButtonBarViewModel;
class UEHDataProvider;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHScreenViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHButtonBarViewModel* ButtonBarViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHDataProvider* DataProvider;
    
public:
    UEHScreenViewModel();
};

