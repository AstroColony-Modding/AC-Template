#pragma once
#include "CoreMinimal.h"
#include "EHToastViewModel.h"
#include "EHTechToastViewModel.generated.h"

class UEHTechnologyAsset;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHTechToastViewModel : public UEHToastViewModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHTechnologyAsset* TechnologyAsset;
    
public:
    UEHTechToastViewModel();
};

