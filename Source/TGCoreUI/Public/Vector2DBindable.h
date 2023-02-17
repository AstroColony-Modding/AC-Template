#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Bindable.h"
#include "Vector2DBindable.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUI_API FVector2DBindable : public FBindable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
public:
    FVector2DBindable();
};

