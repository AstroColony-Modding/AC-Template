#include "CFCoreSearchModsFilter.h"

FCFCoreSearchModsFilter::FCFCoreSearchModsFilter() {
    this->classId = 0;
    this->categoryId = 0;
    this->sortField = ECFCoreModsSearchSortField::None;
    this->sortOrder = ECFCoreSortOrder::None;
    this->modLoaderType = ECFCoreModLoaderType::Any;
    this->gameVersionTypeId = 0;
}

