#pragma once
#include "CoreMinimal.h"
#include "EHBaseButtonWidget.h"
#include "EHTabWidget.generated.h"

class UEHTabViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHTabWidget : public UEHBaseButtonWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHTabViewModel* TabViewModel;
    
public:
    UEHTabWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelection(const bool IsSelected);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTabSelected(const bool IsSelected);
    
};

