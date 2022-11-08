#include "TGRadioButtonsLine.h"

void UTGRadioButtonsLine::SetTextColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UTGRadioButtonsLine::SetSelectedItemByName(const FString& ItemName) {
}

void UTGRadioButtonsLine::SetSelectedItemByIndex(const int32 ItemIndex) {
}

void UTGRadioButtonsLine::SetButtons(const TArray<FText>& ButtonsIn) {
}

FString UTGRadioButtonsLine::GetSelectedItemName() {
    return TEXT("");
}

int32 UTGRadioButtonsLine::GetSelectedItemIndex() {
    return 0;
}

TArray<FText> UTGRadioButtonsLine::GetButtons() {
    return TArray<FText>();
}

UTGRadioButtonsLine::UTGRadioButtonsLine() {
    this->DefaultSelectedIndex = 0;
    this->Orientation = Orient_Horizontal;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->IsFocusable = true;
}

