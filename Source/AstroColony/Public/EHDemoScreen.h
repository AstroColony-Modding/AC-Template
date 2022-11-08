#pragma once
#include "CoreMinimal.h"
#include "EHUIScreen.h"
#include "EHDemoScreen.generated.h"

class UEHDemoViewModel;
class UEHBaseButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHDemoScreen : public UEHUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHDemoViewModel* DemoViewModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* GenerateUniverseButton;
    
public:
    UEHDemoScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameInstanceTravelData();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGenerateUniverseButtonPressed(UEHBaseButtonWidget* Button);
    
};

