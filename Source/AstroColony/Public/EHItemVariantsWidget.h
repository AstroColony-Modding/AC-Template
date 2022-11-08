#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHItemInstance.h"
#include "EHItemVariantsWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHItemVariantsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHItemInstance Item;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* VariantsHorizontal;
    
public:
    UEHItemVariantsWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContextChanged();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FEHItemInstance& InItem);
    
};

