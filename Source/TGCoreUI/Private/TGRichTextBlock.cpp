#include "TGRichTextBlock.h"

UTGRichTextBlock::UTGRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->ShowKeyNameDecoration = true;
    this->DefaultTextStyleName = TEXT("Default");
    this->PreviewControllerType = PSX;
}

