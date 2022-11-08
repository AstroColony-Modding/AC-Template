#include "TGEditableTextBox.h"

void UTGEditableTextBox::UpdateCharacters(const ETextBoxContentType Type, const int32 NewCharacterLimit) {
}

void UTGEditableTextBox::SetFont(const FSlateFontInfo& InFont) {
}

void UTGEditableTextBox::HandleOnTextChanged(const FText& InText) {
}

UTGEditableTextBox::UTGEditableTextBox() {
    this->CharacterLimit = 0;
    this->ContentType = ETextBoxContentType::Default;
}

