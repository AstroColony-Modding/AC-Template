#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TGUIConfig.generated.h"

UCLASS(Abstract, Blueprintable)
class TGCOREUI_API UTGUIConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UTGUIConfig();
};

