#pragma once
#include "CoreMinimal.h"
#include "EHUserWidget.h"
#include "EHRadioButton.generated.h"

class UTGCheckBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHRadioButton : public UEHUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRadioToggleStateChanged, uint8, RadioButtonID, bool, bIsToggled);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadioToggleStateChanged OnToggleStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGCheckBox* CheckBox;
    
public:
    UEHRadioButton();
    UFUNCTION(BlueprintCallable)
    void SetToggled(const bool IsToggled);
    
    UFUNCTION(BlueprintCallable)
    void InitButton(const uint8 InRadioButtonID, const FString& InButtonName);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleToggleStateChanged(bool IsToggled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetButtonName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetButtonID();
    
};

