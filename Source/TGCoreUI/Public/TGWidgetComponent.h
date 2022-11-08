#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "TGWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class TGCOREUI_API UTGWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UTGWidgetComponent();
};

