#pragma once
#include "CoreMinimal.h"
#include "Bindable.h"
#include "Int32Bindable.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUI_API FInt32Bindable : public FBindable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    FInt32Bindable();
};

