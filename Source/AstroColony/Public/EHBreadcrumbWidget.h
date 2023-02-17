#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "TGUserWidget.h"
#include "Templates/SubclassOf.h"
#include "EHBreadcrumbWidget.generated.h"

class UEHBreadcrumbViewModel;
class UHorizontalBox;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBreadcrumbWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ArrowPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUserWidget> BreadcrumbEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ArrowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BreadcrumbContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHBreadcrumbViewModel* BreadcrumbViewModel;
    
public:
    UEHBreadcrumbWidget();
};

