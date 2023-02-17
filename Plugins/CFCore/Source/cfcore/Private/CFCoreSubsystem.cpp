#include "CFCoreSubsystem.h"

void UCFCoreSubsystem::UpdateMod(int64 mod_id, const FUpdateModRequest& update_mod_request, const FString& avatar_image_filename, UCFCoreSubsystem::FCFCoreUpdateModDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::Unitialize(UCFCoreSubsystem::FCFCoreUninitializeDelegate on_uninitialized, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::UninstallMod(int64 mod_id, UCFCoreSubsystem::FCFCoreLibUninstallDelegate on_uninstalled, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::SynchronizeWithServer(UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::SendSecurityCode(const FString& email, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::Logout(UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::IsAuthenticated(UCFCoreSubsystem::FCFCoreIsAuthenticatedDelegate on_is_auth) {
}

void UCFCoreSubsystem::InstallMod(FCFCoreMod mod, UCFCoreSubsystem::FCFCoreLibInstallProgressDelegate on_progress, UCFCoreSubsystem::FCFCoreLibInstallDelegate on_installed, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::Initialize(const FCFCoreSettings& Settings, UCFCoreSubsystem::FCFCoreInitializeDelegate on_initialized, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::GetInstalledMods(UCFCoreSubsystem::FCFCoreLibGetInstalledModsDelegate on_installed_mods, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::GetAuthTerms(UCFCoreSubsystem::FCFCoreGetAuthTerms on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::GenerateAuthTokenByExternalProvider(ECFCoreExternalAuthProvider provider, const FString& external_token, const FExternalAuthAdditionalInfo& additional_info, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::GenerateAuthToken(const FString& email, int32 security_code, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::CreateModFile(int64 mod_id, const FCreateModFileRequest& create_mod_file_request, const FString& Filename, UCFCoreSubsystem::FCreateModFileRequestIdDelegate on_create_mod_file_request_id, UCFCoreSubsystem::FCreateModFileProgressDelegate on_progress, UCFCoreSubsystem::FCreateModFileDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::CreateMod(const FCreateModRequest& create_mod_request, const FString& avatar_image_filename, UCFCoreSubsystem::FCFCoreCreateModDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::CancelInstallation(int64 mod_id, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiUpdateThumbsUp(int64 modId, ECFCoreThumbsUpDirection Direction, UCFCoreSubsystem::FCFCoreSuccessDelegate on_success, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiSearchMods(FCFCoreSearchModsFilter Filter, FCFCoreApiRequestPagination pagination, UCFCoreSubsystem::FCFCoreApiSearchModsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiReportMod(int64 modId, int64 reasonId, const FString& report, UCFCoreSubsystem::FCFCoreSuccessDelegate on_reasons, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetVersionTypes(UCFCoreSubsystem::FCFCoreApiGetVersionTypesDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetVersions(UCFCoreSubsystem::FCFCoreApiGetVersionsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetReportingReasons(UCFCoreSubsystem::FCFCoreApiGetReportingReasonsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetMyThumbsUp(UCFCoreSubsystem::FCFCoreApiGetMyThumbsUpDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetMyMods(UCFCoreSubsystem::FCFCoreApiGetModsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetMods(const TArray<int64> modIds, UCFCoreSubsystem::FCFCoreApiGetModsDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetModDescription(int64 modId, UCFCoreSubsystem::FCFCoreApiGetModDescDelegate on_mod_desc, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetMod(int64 modId, UCFCoreSubsystem::FCFCoreApiGetModDelegate on_mod, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetMe(UCFCoreSubsystem::FCFCoreApiGetMeDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetGame(UCFCoreSubsystem::FCFCoreApiGetGameDelegate on_game, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

void UCFCoreSubsystem::ApiGetCategories(FCFCoreGetCategoriesFilter Filter, UCFCoreSubsystem::FCFCoreApiGetCategoriesDelegate on_results, UCFCoreSubsystem::FCFCoreErrorDelegate on_error) {
}

UCFCoreSubsystem::UCFCoreSubsystem() {
}

