#pragma once
#include "CoreMinimal.h"
#include "ECFCoreModLoaderType.h"
#include "CFCoreSettings.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CFCoreSearchModsFilter.h"
#include "ECFCoreSortOrder.h"
#include "ECFCoreModsSearchSortField.h"
#include "CFCoreGetCategoriesFilter.h"
#include "CFCoreApiRequestPagination.h"
#include "CFCoreBPLibrary.generated.h"

UCLASS(Blueprintable)
class CFCORE_API UCFCoreBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCFCoreBPLibrary();
    UFUNCTION(BlueprintPure)
    static FCFCoreSettings MakeSettings(int64 game_id, const FString& api_key, const FString& mods_directory, const FString& user_data_directory, int32 max_concurrent_installations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCFCoreSearchModsFilter MakeSearchModsFilter(int32 class_id, int32 category_id, const FString& game_version, const FString& search_filter, ECFCoreModsSearchSortField sort_field, ECFCoreSortOrder sort_order, ECFCoreModLoaderType mod_loader_type, int32 game_version_type_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCFCoreGetCategoriesFilter MakeGetCategoriesFilter(int32 class_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCFCoreApiRequestPagination MakeApiRequestPagination(int32 Index, int32 page_size);
    
};

