#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "Templates/SubclassOf.h"
#include "InteractMenuWidget.generated.h"

class UEHInteractableObject;
class UInteractBaseWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UInteractMenuWidget : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UEHInteractableObject>, TSubclassOf<UInteractBaseWidget>> InteractableObjectWidgetMap;
    
    UInteractMenuWidget();
};

