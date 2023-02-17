#include "CFCoreBPLibrary.h"

FUpdateModRequest UCFCoreBPLibrary::MakeUpdateModRequest(int64 class_id, const FString& Name, const FString& summary, ECFCoreMakrupType description_type, const FString& Description, int64 primary_category_id, const TArray<int64>& game_category_ids, bool is_experimental) {
    return FUpdateModRequest{};
}

FCFCoreSettings UCFCoreBPLibrary::MakeSettingsFromProjectConfig() {
    return FCFCoreSettings{};
}

FCFCoreSettings UCFCoreBPLibrary::MakeSettings(const FString& default_language, int64 game_id, const FString& api_key, const FString& mods_directory, const FString& user_data_directory, int32 max_concurrent_installations) {
    return FCFCoreSettings{};
}

FCFCoreSearchModsFilter UCFCoreBPLibrary::MakeSearchModsFilter(int32 class_id, int32 category_id, const FString& game_version, const FString& search_filter, ECFCoreModsSearchSortField sort_field, ECFCoreSortOrder sort_order, ECFCoreModLoaderType mod_loader_type, int32 game_version_type_id) {
    return FCFCoreSearchModsFilter{};
}

FCFCoreGetCategoriesFilter UCFCoreBPLibrary::MakeGetCategoriesFilter(int32 class_id) {
    return FCFCoreGetCategoriesFilter{};
}

FExternalAuthAdditionalInfo UCFCoreBPLibrary::MakeExternalAuthAdditionalInfo(FDateTime eulaAcceptTime) {
    return FExternalAuthAdditionalInfo{};
}

FCreateModRequest UCFCoreBPLibrary::MakeCreateModRequest(int64 class_id, const FString& Name, const FString& summary, ECFCoreMakrupType description_type, const FString& Description, int64 primary_category_id, const TArray<int64>& game_category_ids, bool is_experimental) {
    return FCreateModRequest{};
}

FCreateModFileRequest UCFCoreBPLibrary::MakeCreateModFileRequest(const FString& Note, ECFCoreChangelogMarkupType changelog_type, const FString& changelog, const FString& Filename, const FString& DisplayName, const TArray<int64>& gameVersionIds, ECFCoreFileReleaseType release_type) {
    return FCreateModFileRequest{};
}

FCFCoreApiRequestPagination UCFCoreBPLibrary::MakeApiRequestPagination(int32 Index, int32 page_size) {
    return FCFCoreApiRequestPagination{};
}

UCFCoreBPLibrary::UCFCoreBPLibrary() {
}

