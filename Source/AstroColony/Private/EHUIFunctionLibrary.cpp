#include "EHUIFunctionLibrary.h"

class UWidget;

FText UEHUIFunctionLibrary::GetItemsFormattedText(const TArray<FEHItemInstance>& ItemInstances) {
    return FText::GetEmpty();
}

bool UEHUIFunctionLibrary::AreWidgetsUnderLocation(const TArray<UWidget*> Widgets, const FVector2D& AbsoluteCoordinate) {
    return false;
}

UEHUIFunctionLibrary::UEHUIFunctionLibrary() {
}

