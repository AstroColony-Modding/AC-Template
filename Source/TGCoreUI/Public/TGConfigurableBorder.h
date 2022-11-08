#pragma once
#include "CoreMinimal.h"
#include "Components/Border.h"
#include "ConfigurableUIInterface.h"
#include "TGConfigurableBorder.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGConfigurableBorder : public UBorder, public IConfigurableUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfigPropertyName;
    
    UTGConfigurableBorder();
    
    // Fix for true pure virtual functions not being implemented
};

