#pragma once
#include "CoreMinimal.h"
#include "TGUIPopupManagerContext.generated.h"

class UTGPopupViewModel;

USTRUCT(BlueprintType)
struct TGCOREUI_API FTGUIPopupManagerContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGPopupViewModel* PopupViewModel;
    
public:
    FTGUIPopupManagerContext();
};

