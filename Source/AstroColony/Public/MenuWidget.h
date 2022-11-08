#pragma once
#include "CoreMinimal.h"
#include "InteractBaseWidget.h"
#include "MenuWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UMenuWidget : public UInteractBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MenuName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MenuIcon;
    
    UMenuWidget();
};

