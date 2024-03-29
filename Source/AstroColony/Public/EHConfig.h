#pragma once
#include "CoreMinimal.h"
#include "ConfigurableBorder.h"
#include "ConfigurableImage.h"
#include "TGUIConfigMain.h"
#include "EHConfig.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHConfig : public UTGUIConfigMain {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfigurableImage ConfigurableImageExample;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfigurableBorder ConfigurableBorderExample;
    
public:
    UEHConfig();
};

