#pragma once
#include "CoreMinimal.h"
#include "ConfigurableUIInterface.h"
#include "Components/TextBlock.h"
#include "TGConfigurableTextBlock.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGConfigurableTextBlock : public UTextBlock, public IConfigurableUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfigPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorThemeName;
    
    UTGConfigurableTextBlock();
    UFUNCTION(BlueprintCallable)
    void UpdateConfigName(FName InConfigPropertyName);
    
    
    // Fix for true pure virtual functions not being implemented
};

