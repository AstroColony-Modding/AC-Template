#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHHostGameScreen.generated.h"

class UEHHostGameViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHHostGameScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHHostGameViewModel* HostGameViewModel;
    
    UEHHostGameScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameInstanceTravelData();
    
};

