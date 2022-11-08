#include "EHButtonBarEntryViewModel.h"

FTextBindable UEHButtonBarEntryViewModel::GetDisplayText() {
    return FTextBindable{};
}

UEHButtonBarEntryViewModel::UEHButtonBarEntryViewModel() {
    this->ButtonBarAction = EButtonBarAction::BACK;
    this->Priority = 0;
}

