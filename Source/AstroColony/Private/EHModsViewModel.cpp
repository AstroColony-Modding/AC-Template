#include "EHModsViewModel.h"

class UTGViewModel;

void UEHModsViewModel::HandlePopupAction(FName Action) {
}

void UEHModsViewModel::HandleModsOptionSelected(UTGViewModel* InViewModel) {
}

void UEHModsViewModel::HandleModInstalled() {
}

UEHModsViewModel::UEHModsViewModel() {
    this->ModsListViewModel = NULL;
    this->ModsBrowsedListViewModel = NULL;
}

