#pragma once
#include "CoreMinimal.h"
#include "Bindable.h"
#include "TextBindable.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUI_API FTextBindable : public FBindable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
public:
    FTextBindable();
};

