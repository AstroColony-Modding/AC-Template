#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TGEventListener.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class TGEVENT_API UTGEventListener : public UObject {
    GENERATED_BODY()
public:
    UTGEventListener();
};

