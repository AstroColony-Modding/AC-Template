#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "ConfigurableUIInterface.h"
#include "TGConfigurableImage.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGConfigurableImage : public UImage, public IConfigurableUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfigPropertyName;
    
    UTGConfigurableImage();
    
    // Fix for true pure virtual functions not being implemented
};

