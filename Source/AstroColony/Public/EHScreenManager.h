#pragma once
#include "CoreMinimal.h"
#include "TGUISceneContexts.h"
#include "TGUIScreenManager.h"
#include "EEHUIScreenID.h"
#include "ScreenDefinition.h"
#include "EHScreenManager.generated.h"

class UTGUIScreen;
class UEHScreenViewModel;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHScreenManager : public UTGUIScreenManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<EEHUIScreenID, UTGUIScreen*> ScreenMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTGUIScreen*> PinnedScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHUIScreenID, FScreenDefinition> ScreenDefinitionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHUIScreenID, FTGUISceneContexts> UISceneContextsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHScreenViewModel*> PinnedScreenViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEHUIScreenID, UEHScreenViewModel*> ScreenViewModelsByType;
    
public:
    UEHScreenManager();
    UFUNCTION(BlueprintCallable)
    void OpenScreen(const EEHUIScreenID ScreenID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTGUIScreen* GetScreen(const EEHUIScreenID ScreenID);
    
    UFUNCTION(BlueprintCallable)
    void CloseScreen(const EEHUIScreenID ScreenID, const bool ClearViewmodel);
    
};

