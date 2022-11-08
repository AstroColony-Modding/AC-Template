#pragma once
#include "CoreMinimal.h"
#include "WidgetPool.generated.h"

class UTGUserWidget;

USTRUCT(BlueprintType)
struct FWidgetPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTGUserWidget*> UserWidgets;
    
    TGCOREUI_API FWidgetPool();
};

