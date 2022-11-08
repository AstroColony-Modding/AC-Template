#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ETechNodePinType.h"
#include "TechNodeArrowWidget.generated.h"

class UTechnologyAsset;

UCLASS(Blueprintable, EditInlineNew)
class TECHTREE_API UTechNodeArrowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechNodePinType PinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyAsset* ParentTechnology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyAsset* ChildTechnology;
    
    UTechNodeArrowWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNodeArrowInitialized();
    
};

