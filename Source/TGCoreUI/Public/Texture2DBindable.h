#pragma once
#include "CoreMinimal.h"
#include "Bindable.h"
#include "Texture2DBindable.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TGCOREUI_API FTexture2DBindable : public FBindable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Value;
    
public:
    FTexture2DBindable();
};

