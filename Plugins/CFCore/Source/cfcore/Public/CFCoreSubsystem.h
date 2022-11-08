#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "CFCoreError.h"
#include "InstalledMod.h"
#include "LibraryProgress.h"
#include "GameVersionsByType.h"
#include "CFCoreMod.h"
#include "CFCoreApiResponsePagination.h"
#include "GameVersionType.h"
#include "Game.h"
#include "Category.h"
#include "ECFCoreThumbsUpDirection.h"
#include "CFCoreSettings.h"
#include "CFCoreSearchModsFilter.h"
#include "CFCoreApiRequestPagination.h"
#include "CFCoreGetCategoriesFilter.h"
#include "CFCoreSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UCFCoreSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FCFCoreUninitializeDelegate);
    DECLARE_DYNAMIC_DELEGATE(FCFCoreSuccessDelegate);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreLibUninstallDelegate, const FInstalledMod&, uninstalled_mod);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreLibInstallProgressDelegate, const FLibraryProgress&, progress);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreLibInstallDelegate, const FInstalledMod&, installed_mod);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreLibGetInstalledModsDelegate, const TArray<FInstalledMod>&, installed_mods);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreIsAuthenticatedDelegate, bool, is_authenticated);
    DECLARE_DYNAMIC_DELEGATE(FCFCoreInitializeDelegate);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreErrorDelegate, const FCFCoreError&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FCFCoreApiSearchModsDelegate, const TArray<FCFCoreMod>&, mods, const FCFCoreApiResponsePagination&, pagination);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreApiGetVersionTypesDelegate, const TArray<FGameVersionType>&, version_types);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreApiGetVersionsDelegate, const TArray<FGameVersionsByType>&, versions);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreApiGetModsDelegate, const TArray<FCFCoreMod>&, mods);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreApiGetModDescDelegate, const FString&, Description);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreApiGetModDelegate, const FCFCoreMod&, mod);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreApiGetGameDelegate, const FGame&, Game);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FCFCoreApiGetCategoriesDelegate, const TArray<FCategory>&, Categories);
    
    UCFCoreSubsystem();
    UFUNCTION(BlueprintCallable)
    void Unitialize(UCFCoreSubsystem::FCFCoreUninitializeDelegate on_uninitialized, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void UninstallMod(int64 mod_id, UCFCoreSubsystem::FCFCoreLibUninstallDelegate on_uninstalled, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void SynchronizeWithServer(UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void SendSecurityCode(const FString& email, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void IsAuthenticated(UCFCoreSubsystem::FCFCoreIsAuthenticatedDelegate on_is_auth);
    
    UFUNCTION(BlueprintCallable)
    void InstallMod(FCFCoreMod mod, UCFCoreSubsystem::FCFCoreLibInstallProgressDelegate on_progress, UCFCoreSubsystem::FCFCoreLibInstallDelegate on_installed, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FCFCoreSettings& Settings, UCFCoreSubsystem::FCFCoreInitializeDelegate on_initialized, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void GetInstalledMods(UCFCoreSubsystem::FCFCoreLibGetInstalledModsDelegate on_installed_mods, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void GenerateAuthToken(const FString& email, int32 security_code, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void CancelInstallation(int64 mod_id, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiUpdateThumbsUp(int64 modId, ECFCoreThumbsUpDirection Direction, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiSearchMods(FCFCoreSearchModsFilter Filter, FCFCoreApiRequestPagination pagination, UCFCoreSubsystem::FCFCoreApiSearchModsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiGetVersionTypes(UCFCoreSubsystem::FCFCoreApiGetVersionTypesDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiGetVersions(UCFCoreSubsystem::FCFCoreApiGetVersionsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiGetMods(const TArray<int64> modIds, UCFCoreSubsystem::FCFCoreApiGetModsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiGetModDescription(int64 modId, UCFCoreSubsystem::FCFCoreApiGetModDescDelegate on_mod_desc, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiGetMod(int64 modId, UCFCoreSubsystem::FCFCoreApiGetModDelegate on_mod, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiGetGame(UCFCoreSubsystem::FCFCoreApiGetGameDelegate on_game, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
    UFUNCTION(BlueprintCallable)
    void ApiGetCategories(FCFCoreGetCategoriesFilter Filter, UCFCoreSubsystem::FCFCoreApiGetCategoriesDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error);
    
};

