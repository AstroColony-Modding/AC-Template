#pragma once
#include "CoreMinimal.h"
#include "Bindable.h"
#include "FloatBindable.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUI_API FFloatBindable : public FBindable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    FFloatBindable();
};

