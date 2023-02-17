#include "CFCoreApiResponseError.h"

FCFCoreApiResponseError::FCFCoreApiResponseError() {
    this->cancelled = false;
    this->badRequest = false;
    this->entityNotFound = false;
    this->serverUnreachable = false;
    this->missingPriviliges = false;
    this->tokenExpired = false;
    this->resourceExpired = false;
    this->failedToParseServerResponse = false;
}

