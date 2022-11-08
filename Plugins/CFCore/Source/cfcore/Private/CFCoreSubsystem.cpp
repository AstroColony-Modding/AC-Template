#include "CFCoreSubsystem.h"

void UCFCoreSubsystem::Unitialize(UCFCoreSubsystem::FCFCoreUninitializeDelegate on_uninitialized, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::UninstallMod(int64 mod_id, UCFCoreSubsystem::FCFCoreLibUninstallDelegate on_uninstalled, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::SynchronizeWithServer(UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::SendSecurityCode(const FString& email, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::IsAuthenticated(UCFCoreSubsystem::FCFCoreIsAuthenticatedDelegate on_is_auth) {
}

void UCFCoreSubsystem::InstallMod(FCFCoreMod mod, UCFCoreSubsystem::FCFCoreLibInstallProgressDelegate on_progress, UCFCoreSubsystem::FCFCoreLibInstallDelegate on_installed, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::Initialize(const FCFCoreSettings& Settings, UCFCoreSubsystem::FCFCoreInitializeDelegate on_initialized, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::GetInstalledMods(UCFCoreSubsystem::FCFCoreLibGetInstalledModsDelegate on_installed_mods, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::GenerateAuthToken(const FString& email, int32 security_code, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::CancelInstallation(int64 mod_id, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiUpdateThumbsUp(int64 modId, ECFCoreThumbsUpDirection Direction, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiSearchMods(FCFCoreSearchModsFilter Filter, FCFCoreApiRequestPagination pagination, UCFCoreSubsystem::FCFCoreApiSearchModsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetVersionTypes(UCFCoreSubsystem::FCFCoreApiGetVersionTypesDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetVersions(UCFCoreSubsystem::FCFCoreApiGetVersionsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetMods(const TArray<int64> modIds, UCFCoreSubsystem::FCFCoreApiGetModsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetModDescription(int64 modId, UCFCoreSubsystem::FCFCoreApiGetModDescDelegate on_mod_desc, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetMod(int64 modId, UCFCoreSubsystem::FCFCoreApiGetModDelegate on_mod, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetGame(UCFCoreSubsystem::FCFCoreApiGetGameDelegate on_game, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetCategories(FCFCoreGetCategoriesFilter Filter, UCFCoreSubsystem::FCFCoreApiGetCategoriesDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

UCFCoreSubsystem::UCFCoreSubsystem() {
}

