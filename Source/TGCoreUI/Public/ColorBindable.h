#pragma once
#include "CoreMinimal.h"
#include "Bindable.h"
#include "UObject/NoExportTypes.h"
#include "ColorBindable.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUI_API FColorBindable : public FBindable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
public:
    FColorBindable();
};

