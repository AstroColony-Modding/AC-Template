#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TGWidget.h"
#include "Types/SlateEnums.h"
#include "Components/SlateWrapperTypes.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "TGPanelWrapper.generated.h"

class UTGUserWidget;

UCLASS(Abstract, Blueprintable)
class TGCOREUI_API UTGPanelWrapper : public UTGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> ChildHorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> ChildVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateChildSize ChildSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ChildPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUserWidget> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePooling;
    
    UPROPERTY(EditAnywhere)
    uint8 PreviewItemsNumber;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTGUserWidget*> CachedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTGUserWidget*> ChildrenWidgets;
    
public:
    UTGPanelWrapper();
};

