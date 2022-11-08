#include "EHWorldResourceObject.h"

class UEHItem;




UEHItem* UEHWorldResourceObject::GetHarvestedItem() {
    return NULL;
}

UEHWorldResourceObject::UEHWorldResourceObject() {
    this->TotalNumHits = 5;
    this->Quantity = 20;
    this->NumOfHits = 0;
    this->WorldItem = NULL;
}

