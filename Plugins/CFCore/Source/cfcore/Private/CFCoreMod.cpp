#include "CFCoreMod.h"

FCFCoreMod::FCFCoreMod() {
    this->ID = 0;
    this->gameId = 0;
    this->gamePopularityRank = 0;
    this->status = ECFCoreModStatus::None;
    this->downloadCount = 0;
    this->isFeatured = false;
    this->classId = 0;
    this->primaryCategoryId = 0;
    this->mainFileId = 0;
    this->allowModDistribution = false;
    this->isAvailable = false;
    this->thumbsUpCount = 0;
}

