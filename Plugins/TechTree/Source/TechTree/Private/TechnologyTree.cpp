#include "TechnologyTree.h"

class UTechnologyAsset;

bool UTechnologyTree::IsTechnologyUnlocked(UTechnologyAsset* Technology) {
    return false;
}

bool UTechnologyTree::IsTechnologyDisabled(UTechnologyAsset* Technology) {
    return false;
}

bool UTechnologyTree::HasUnlockedParents(UTechnologyAsset* Technology) {
    return false;
}

FString UTechnologyTree::GetTechAssetName() {
    return TEXT("");
}

UTechnologyTree::UTechnologyTree() {
    this->Orientation = ETechTreeOrientation::Vertical;
    this->ConnectionLineThickness = 4.00f;
    this->SlotTemplate = NULL;
    this->ArrowTemplate = NULL;
    this->GridSnapSize = 16;
    this->ShowBoundaries = true;
    this->BoundariesThickness = 4.00f;
    this->ShowPinArrows = true;
    this->ShowAlignmentGrid = false;
    this->AlignmentGridThickness = 4.00f;
    this->UpdateGraph = NULL;
    this->UniqueID = 0;
    this->TechTreeTemplate = NULL;
}

