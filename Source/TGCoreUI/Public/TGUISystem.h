#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TGIUISystem.h"
#include "Templates/SubclassOf.h"
#include "TGUISystem.generated.h"

class UTGUIAchievementsManager;
class UTGUIAudioManager;
class UTGUIFocusManager;
class UTGUILayerManager;
class UTGUILoadingScreenManager;
class UTGUINarrationManager;
class UTGUIPopupManager;
class UTGUISceneContextManager;
class UTGUIScreenManager;

UCLASS(Blueprintable)
class TGCOREUI_API UTGUISystem : public UObject, public ITGIUISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUIScreenManager> ScreenManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUISceneContextManager> UISceneContextManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUILayerManager> LayerManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUIPopupManager> PopupManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUILoadingScreenManager> LoadingScreenManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUIAchievementsManager> AchievementsManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUIAudioManager> UIAudioManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUINarrationManager> NarrationManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTGUIFocusManager> FocusManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUILayerManager* LayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUIScreenManager* ScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUISceneContextManager* UISceneContextManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUIPopupManager* PopupManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUILoadingScreenManager* LoadingScreenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUIAchievementsManager* AchievementsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUIAudioManager* UIAudioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUINarrationManager* NarrationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUIFocusManager* FocusManager;
    
public:
    UTGUISystem();
    
    // Fix for true pure virtual functions not being implemented
};

