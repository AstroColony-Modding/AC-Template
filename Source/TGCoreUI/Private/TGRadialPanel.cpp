#include "TGRadialPanel.h"

class UTGRadialPanelSlot;
class UWidget;

UTGRadialPanelSlot* UTGRadialPanel::AddChildToCanvas(UWidget* content) {
    return NULL;
}

UTGRadialPanel::UTGRadialPanel() {
    this->PreviewThickness = 4.00f;
    this->NumberOfPreviewSegments = 20;
    this->ShowPreviewInGame = false;
    this->EllipseToRectangleLerpStrength = 0.00f;
}

