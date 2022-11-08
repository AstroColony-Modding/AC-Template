#include "EHAsset.h"

UEHAsset::UEHAsset() {
    this->DebugSortPriority = 100;
    this->IsUnlockedByDefault = true;
    this->UnlockType = EUnlockType::None;
}

