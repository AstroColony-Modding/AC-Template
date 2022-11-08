#include "File.h"

FFile::FFile() {
    this->ID = 0;
    this->gameId = 0;
    this->modId = 0;
    this->isAvailable = false;
    this->releaseType = ECFCoreFileReleaseType::None;
    this->fileStatus = ECFCoreFileStatus::None;
    this->fileLength = 0;
    this->downloadCount = 0;
    this->ExposeAsAlternative = false;
    this->parentProjectFileId = 0;
    this->alternateFileId = 0;
    this->isServerPack = false;
    this->serverPackFileId = 0;
    this->fileFingerprint = 0;
}

