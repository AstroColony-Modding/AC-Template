#pragma once
#include "CoreMinimal.h"
#include "TextBindable.h"
#include "EEHBackgroundType.h"
#include "EHScreenViewModel.h"
#include "EHSettingsViewModel.generated.h"

class UEHGameUserSettings;
class UEHSettingsCategoryViewModel;
class UEHSettingsPreviewViewModel;
class UEHSettingsWarningViewModel;
class UEHTabCategoryViewModel;
class UTGUIAudioManager;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHSettingsViewModel : public UEHScreenViewModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHTabCategoryViewModel* TabCategoryViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEHSettingsCategoryViewModel*> SettingsCategoryViewModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsPreviewViewModel* SettingsPreviewViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsWarningViewModel* SettingsWarningViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSettingsWarningViewModel* SettingsAlertViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPendingChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHBackgroundType GameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBindable CategoryText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHGameUserSettings* EHSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTGUIAudioManager* AudioManager;
    
public:
    UEHSettingsViewModel();
};

