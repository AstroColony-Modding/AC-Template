#include "EHWorldItem.h"

UEHWorldItem::UEHWorldItem() {
    this->MiningResourceType = EEHMiningResourceType::None;
    this->HarvestedItem = NULL;
    this->DepositMinQuantity = 20;
    this->DepositMaxQuantity = 40;
}

