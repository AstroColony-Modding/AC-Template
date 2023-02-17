#pragma once
#include "CoreMinimal.h"
#include "TGUISceneManager.h"
#include "TGUIScreenManager.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGUIScreenManager : public UTGUISceneManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ScreenHistory;
    
public:
    UTGUIScreenManager();
    UFUNCTION(BlueprintCallable)
    void Back();
    
};

