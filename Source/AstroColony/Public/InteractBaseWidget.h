#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractBaseWidget.generated.h"

class UEHInteractableObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UInteractBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHInteractableObject* InteractableObject;
    
    UInteractBaseWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContextChanged();
    
    UFUNCTION(BlueprintCallable)
    void Init(UEHInteractableObject* InInteractableObject);
    
};

