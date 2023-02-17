#include "CreateModRequest.h"

FCreateModRequest::FCreateModRequest() {
    this->classId = 0;
    this->descriptionType = ECFCoreMakrupType::PlaceHolderDoNotUse;
    this->primaryCategoryId = 0;
    this->isExperimental = false;
}

