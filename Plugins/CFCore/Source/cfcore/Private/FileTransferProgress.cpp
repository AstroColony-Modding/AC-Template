#include "FileTransferProgress.h"

FFileTransferProgress::FFileTransferProgress() {
    this->progress = 0;
    this->transferred_bytes = 0;
    this->bytes_per_second = 0;
}

