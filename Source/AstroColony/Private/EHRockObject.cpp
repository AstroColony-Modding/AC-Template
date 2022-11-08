#include "EHRockObject.h"



FEHItemInstance UEHRockObject::GetExtractInstance() {
    return FEHItemInstance{};
}


UEHRockObject::UEHRockObject() {
    this->TotalNumHits = 5;
    this->NumOfHits = 0;
}

