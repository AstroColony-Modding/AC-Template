#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TGTickableObject.generated.h"

UCLASS(Abstract, Blueprintable)
class TGCOREUTILITY_API UTGTickableObject : public UObject {
    GENERATED_BODY()
public:
    UTGTickableObject();
};

