#include "CFCoreBPLibrary.h"

FCFCoreSettings UCFCoreBPLibrary::MakeSettings(int64 game_id, const FString& api_key, const FString& mods_directory, const FString& user_data_directory, int32 max_concurrent_installations) {
    return FCFCoreSettings{};
}

FCFCoreSearchModsFilter UCFCoreBPLibrary::MakeSearchModsFilter(int32 class_id, int32 category_id, const FString& game_version, const FString& search_filter, ECFCoreModsSearchSortField sort_field, ECFCoreSortOrder sort_order, ECFCoreModLoaderType mod_loader_type, int32 game_version_type_id) {
    return FCFCoreSearchModsFilter{};
}

FCFCoreGetCategoriesFilter UCFCoreBPLibrary::MakeGetCategoriesFilter(int32 class_id) {
    return FCFCoreGetCategoriesFilter{};
}

FCFCoreApiRequestPagination UCFCoreBPLibrary::MakeApiRequestPagination(int32 Index, int32 page_size) {
    return FCFCoreApiRequestPagination{};
}

UCFCoreBPLibrary::UCFCoreBPLibrary() {
}

