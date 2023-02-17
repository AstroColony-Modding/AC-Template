#pragma once
#include "CoreMinimal.h"
#include "TGUIPopupManagerContext.h"
#include "TGUISceneManager.h"
#include "Templates/SubclassOf.h"
#include "TGUIPopupManager.generated.h"

class UTGUIPopup;

UCLASS(Blueprintable)
class TGCOREUI_API UTGUIPopupManager : public UTGUISceneManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTGUIPopupManagerContext> PopupContextQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTGUIPopupManagerContext CurrentPopupContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTGUIPopup* CurrentPopup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTGUIPopup>, UTGUIPopup*> PopupInstances;
    
public:
    UTGUIPopupManager();
};

