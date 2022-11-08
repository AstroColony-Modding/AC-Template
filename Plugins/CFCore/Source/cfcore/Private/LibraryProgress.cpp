#include "LibraryProgress.h"

FLibraryProgress::FLibraryProgress() {
    this->modId = 0;
    this->fileId = 0;
    this->State = ELibraryProgressState::Pending;
}

