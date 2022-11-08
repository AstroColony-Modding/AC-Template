#include "TGRadialPanel.h"

class UWidget;
class UTGRadialPanelSlot;

UTGRadialPanelSlot* UTGRadialPanel::AddChildToCanvas(UWidget* Content) {
    return NULL;
}

UTGRadialPanel::UTGRadialPanel() {
    this->PreviewThickness = 4.00f;
    this->NumberOfPreviewSegments = 20;
    this->ShowPreviewInGame = false;
    this->EllipseToRectangleLerpStrength = 0.00f;
}

