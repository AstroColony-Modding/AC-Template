#pragma once
#include "CoreMinimal.h"
#include "EHViewModel.h"
#include "CFCoreMod.h"
#include "EHModsBrowsedOptionViewModel.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInstalProgressChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInstalCompleted);

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHModsBrowsedOptionViewModel : public UEHViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCFCoreMod CoreMod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstalProgressChanged OnInstalProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstalCompleted OnInstalCompleted;
    
    UEHModsBrowsedOptionViewModel();
};

