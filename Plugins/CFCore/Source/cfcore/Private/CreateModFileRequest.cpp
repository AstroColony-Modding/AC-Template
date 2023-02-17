#include "CreateModFileRequest.h"

FCreateModFileRequest::FCreateModFileRequest() {
    this->changelogType = ECFCoreChangelogMarkupType::PlaceHolderDoNotUse;
    this->releaseType = ECFCoreFileReleaseType::None;
}

