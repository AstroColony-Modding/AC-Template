#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Bindable.h"
#include "VisibilityBindable.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUI_API FVisibilityBindable : public FBindable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility Value;
    
public:
    FVisibilityBindable();
};

