#pragma once
#include "CoreMinimal.h"
#include "Bindable.h"
#include "BoolBindable.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUI_API FBoolBindable : public FBindable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
public:
    FBoolBindable();
};

