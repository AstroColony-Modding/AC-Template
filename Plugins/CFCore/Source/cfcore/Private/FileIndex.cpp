#include "FileIndex.h"

FFileIndex::FFileIndex() {
    this->fileId = 0;
    this->releaseType = ECFCoreFileReleaseType::None;
    this->gameVersionTypeId = 0;
    this->modLoader = ECFCoreModLoaderType::Any;
}

