#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CFCoreApiRequestPagination.h"
#include "CFCoreGetCategoriesFilter.h"
#include "CFCoreSearchModsFilter.h"
#include "CFCoreSettings.h"
#include "CreateModFileRequest.h"
#include "CreateModRequest.h"
#include "ECFCoreChangelogMarkupType.h"
#include "ECFCoreFileReleaseType.h"
#include "ECFCoreMakrupType.h"
#include "ECFCoreModLoaderType.h"
#include "ECFCoreModsSearchSortField.h"
#include "ECFCoreSortOrder.h"
#include "ExternalAuthAdditionalInfo.h"
#include "UpdateModRequest.h"
#include "CFCoreBPLibrary.generated.h"

UCLASS(Blueprintable)
class CFCORE_API UCFCoreBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCFCoreBPLibrary();
    UFUNCTION(BlueprintPure)
    static FUpdateModRequest MakeUpdateModRequest(int64 class_id, const FString& Name, const FString& summary, ECFCoreMakrupType description_type, const FString& Description, int64 primary_category_id, const TArray<int64>& game_category_ids, bool is_experimental);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCFCoreSettings MakeSettingsFromProjectConfig();
    
    UFUNCTION(BlueprintPure)
    static FCFCoreSettings MakeSettings(const FString& default_language, int64 game_id, const FString& api_key, const FString& mods_directory, const FString& user_data_directory, int32 max_concurrent_installations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCFCoreSearchModsFilter MakeSearchModsFilter(int32 class_id, int32 category_id, const FString& game_version, const FString& search_filter, ECFCoreModsSearchSortField sort_field, ECFCoreSortOrder sort_order, ECFCoreModLoaderType mod_loader_type, int32 game_version_type_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCFCoreGetCategoriesFilter MakeGetCategoriesFilter(int32 class_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExternalAuthAdditionalInfo MakeExternalAuthAdditionalInfo(FDateTime eulaAcceptTime);
    
    UFUNCTION(BlueprintPure)
    static FCreateModRequest MakeCreateModRequest(int64 class_id, const FString& Name, const FString& summary, ECFCoreMakrupType description_type, const FString& Description, int64 primary_category_id, const TArray<int64>& game_category_ids, bool is_experimental);
    
    UFUNCTION(BlueprintPure)
    static FCreateModFileRequest MakeCreateModFileRequest(const FString& Note, ECFCoreChangelogMarkupType changelog_type, const FString& changelog, const FString& Filename, const FString& DisplayName, const TArray<int64>& gameVersionIds, ECFCoreFileReleaseType release_type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCFCoreApiRequestPagination MakeApiRequestPagination(int32 Index, int32 page_size);
    
};

