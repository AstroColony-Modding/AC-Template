#pragma once
#include "CoreMinimal.h"
#include "EHOptionWidget.h"
#include "EHOptionToggleWidget.generated.h"

class UTGCheckBox;
class UEHToggleViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionToggleWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGCheckBox* CheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHToggleViewModel* ToggleViewModel;
    
public:
    UEHOptionToggleWidget();
private:
    UFUNCTION(BlueprintCallable)
    void HandleToggleStateChanged(bool bIsToggled);
    
};

