#pragma once
#include "CoreMinimal.h"
#include "TGUILayer.h"
#include "TGBuildVersionWidget.generated.h"

class UTGConfigurableTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGBuildVersionWidget : public UTGUILayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* VersionTextBlock;
    
public:
    UTGBuildVersionWidget();
};

