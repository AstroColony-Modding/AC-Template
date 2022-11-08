#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TGUIPopupManager.h"
#include "EEHUIPopupID.h"
#include "EHUIPopupManager.generated.h"

class UTGUIPopup;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHUIPopupManager : public UTGUIPopupManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuitGameTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SaveSettingsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SaveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DiscardChanges;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHUIPopupID, TSubclassOf<UTGUIPopup>> PopupTemplateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTGUIPopup*> PinnedPopups;
    
public:
    UEHUIPopupManager();
};

