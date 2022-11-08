#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHOptionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UEHOptionWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void NavigationRight();
    
    UFUNCTION(BlueprintCallable)
    void NavigationLeft();
    
    UFUNCTION(BlueprintCallable)
    void NavigationConfirm();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetOptionName() const;
    
};

