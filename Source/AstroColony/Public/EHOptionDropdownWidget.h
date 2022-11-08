#pragma once
#include "CoreMinimal.h"
#include "EHOptionWidget.h"
#include "Types/SlateEnums.h"
#include "EHOptionDropdownWidget.generated.h"

class UComboBoxString;
class UEHDropdownViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionDropdownWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHDropdownViewModel* DropdownViewModel;
    
public:
    UEHOptionDropdownWidget();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectionOpened();
    
    UFUNCTION()
    void HandleSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

