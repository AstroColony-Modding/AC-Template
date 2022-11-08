#include "CFCoreError.h"

FCFCoreError::FCFCoreError() {
    this->isError = false;
    this->code = ECFCoreErrorCodes::None;
}

