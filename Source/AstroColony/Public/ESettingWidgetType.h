#pragma once
#include "CoreMinimal.h"
#include "ESettingWidgetType.generated.h"

UENUM(BlueprintType)
enum class ESettingWidgetType : uint8 {
    None,
    Stepper,
    Dropdown,
    Slider,
    Button,
    Toggle,
    RadioButtons,
    InputBinding,
    Splitter,
    InputBindingDisplay,
};

