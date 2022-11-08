#include "EHScreenMarkerWidget.h"

UEHScreenMarkerWidget::UEHScreenMarkerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IsOnScreenMarker = false;
    this->MarkerIco = NULL;
    this->ArrowIco = NULL;
    this->MarkerBorder = NULL;
    this->MarkerText = NULL;
    this->TextSizeBox = NULL;
    this->PivotOverlay = NULL;
}

