#include "EHResourceItem.h"

UEHResourceItem::UEHResourceItem() {
    this->MiningResourceType = EEHMiningResourceType::None;
    this->ImportInsideInstances = false;
    this->RotateInsideInstances = false;
    this->ScaleFactor = 1.04f;
    this->ScaleInsideInstances = false;
    this->WarehouseSortPriority = 100;
    this->HitNumberToExtract = 6;
}

