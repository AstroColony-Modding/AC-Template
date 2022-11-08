#pragma once
#include "CoreMinimal.h"
#include "Bindable.h"
#include "StringBindable.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUI_API FStringBindable : public FBindable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
public:
    FStringBindable();
};

