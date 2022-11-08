#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EHOptionWidget.h"
#include "EHOptionRadioButtonsWidget.generated.h"

class UEHRadioButtonsViewModel;
class UHorizontalBox;
class UEHRadioButton;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionRadioButtonsWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalButtonBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHRadioButton> RadioButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHRadioButtonsViewModel* RadioButtonsViewModel;
    
public:
    UEHOptionRadioButtonsWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateToggledRadiobuttonVisual(const uint8 RadioButtonID);
    
private:
    UFUNCTION()
    void HandleToggleStateChanged(uint8 RadioButtonID, bool bIsToggled);
    
};

