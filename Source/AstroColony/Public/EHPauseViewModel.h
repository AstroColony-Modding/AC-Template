#pragma once
#include "CoreMinimal.h"
#include "EHScreenViewModel.h"
#include "EHPauseViewModel.generated.h"

class UEHBaseButtonViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHPauseViewModel : public UEHScreenViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHBaseButtonViewModel*> ButtonViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PauseMenuName;
    
    UEHPauseViewModel();
};

